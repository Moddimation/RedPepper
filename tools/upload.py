import sys
import os
import re
import json
import cxxfilt
import requests
from io import StringIO
from elftools.elf.elffile import ELFFile
from elftools.elf.sections import SymbolTableSection
from diff import *
from settings import *

def find_source_path(str):
    with open(getElfPath(), "rb") as f:
        elf = ELFFile(f)
        last_file = None
        func_syms = []

        print ("Collecting functions ...")
        
        for section in elf.iter_sections():
            if not isinstance(section, SymbolTableSection):
                continue

            for sym in section.iter_symbols():
                if sym['st_info']['type'] == 'STT_FUNC':
                    func_syms.append (sym.name)


        print ("Finding file ...")
        
        for section in elf.iter_sections():
            if not isinstance(section, SymbolTableSection):
                continue

            for sym in section.iter_symbols():
                st_type = sym['st_info']['type']

                if st_type == 'STT_FILE':
                    last_file = sym.name

                elif st_type == 'STT_SECTION':
                    name = sym.name
                    if '.' not in name:
                        continue

                    _, after_dot = name.split('.', 1)

                    if after_dot not in func_syms:
                        continue

                    if str != after_dot:
                        continue

                    return last_file

def find_src_file(str):
    for path in (f"lib/{str}", f"include/{str}", f"src/{str}", f"lib/sead/Include/{str}", f"lib/nnsdk/Include/{str}", f"lib/LibMessageStudio/Include/{str}", f"{os.environ.get("ARMCC41INC")}/{str}"):
        #print(f"{str}: {path}")
        if os.path.exists(path):
              return path

    return str

traversed_files = []
main_data = []

def traverse_file(str, sym):
    content = []
    file_path = find_src_file(str)

    if not os.path.exists(file_path):
        return ""

    if file_path in traversed_files:
        return ""

    #print (f"File: {file_path}")
    traversed_files.append(file_path)

    is_main_data = True if main_data is None or len(main_data) <= 0 else False
    is_skipping = False
    is_ns_al = False
    if is_main_data == True:
        content.append (f'// Context for {sym} in {file_path}\n')
        main_data.append (f'// Source for {sym}')
    else:
        content.append (f"// File: {file_path}\n")

    with open(file_path, "r", encoding="shift-jis") as f:
        s = StringIO(f.read())
        for line in s:
            if "NON_MATCHING" in line:
                if is_skipping == False and is_main_data == False:
                    is_skipping = True
                    continue
                else:
                    is_skipping = False
                    continue
            if is_skipping == True:
                continue

            if not "#include" in line: # main append
                if is_main_data:
                    main_data.append(line)
                else:
                    content.append (line)
                if "namespace al" in line:
                    is_ns_al = True
                continue
            
            if not '<' in line and not '>' in line:
                if not '\"' in line:
                    continue

            incl_path = ""
            match = re.search(r'"([^"]*)"|<([^>]*)>', line)
            if not match:
                continue

            incl_path = match.group(1) or match.group(2)

            included = traverse_file (incl_path, sym)
            for incl_line in included:
                content.append(incl_line)

    if is_skipping == True and is_ns_al == True:
        if is_main_data:
            main_data.append ("Insert code here ...")
            main_data.append ("}")
        else:
            content.append ("}")

    return content

def get_obj_path (str):
    if not os.path.exists(f'{getBuildPath()}/compile_commands.json'):
        return None

    with open(f'{getBuildPath()}/compile_commands.json') as f:
        data = json.load(f)

    for e in data:
        if e.get("file") == (str):
            return f'{getBuildPath()}/{e.get("output")}'

def upload (sym_name, show_name, ctx, src, obj_path):
    print ("Uploading ...")

    api_base = "https://decomp.me"
    url = f"{api_base}/api/scratch"
    
    files = {
        "target_obj": open (obj_path, 'rb')
    }
    data = {
        "name": show_name,
        "context": ctx,
        "source_code": src,
        "diff_label": sym_name,
        "preset": getPresetId ()
    }

    r = requests.post(url, files=files, data=data)

    if not r.ok:
        print("Error:", r.status_code, r.text)
        return None

    res = r.json()

    slug = res.get("slug")
    claim_token = res.get("claim_token")

    if not slug or not claim_token:
        print("Unexpected response:", res)
        return None
    
    base_url = f"{api_base}/scratch/{slug}/"
    claim_url = f"{api_base}/scratch/{slug}/claim?token={claim_token}"

    return {
        "base_url": base_url,
        "claim_url": claim_url
    }

def main():
    if len(sys.argv) <= 1:
        print ("Missing argument: Symbol")
        return

    sym = sys.argv[1]
    path = find_source_path(sym)
    if (path is None):
        print ("Symbol not found.")
        return

    print ("Collecting code ...")
    data = "".join(traverse_file (path, sym))

    main = "".join(main_data)

    #for line in data:
    #    print (line.rstrip('\n'))
    #for line in main:
    #    print (line.rstrip('\n'))

    path_obj = get_obj_path (path)
    if path_obj is None:
        print ("compile_commands.json missing, please build!")
        return

    name = cxxfilt.demangle (sym)

    response = upload (sym, name, data, main, path_obj)

    print (f"Scratch created. Good luck matching {name}!.")
    print (f" -> Claim: {response["claim_url"]}")
    print (f" -> Url: {response["base_url"]}")

if __name__ == "__main__":
    main()

