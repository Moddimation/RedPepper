from io import StringIO
import subprocess
import csv
import os
import sys
from settings import *

def fail(msg: str):
    print(msg)
    sys.exit(1)

elf_exists = os.path.exists(getElfPath())
if elf_exists:
    readelf_data = str(subprocess.check_output(f"{os.environ.get('DEVKITARM')}/bin/arm-none-eabi-readelf {getElfPath()} -sw -W", shell=True))
    if sys.platform == 'win32':
        readelf_data = readelf_data.replace(r'\r\n', '\n')
    else:
        readelf_data = readelf_data.replace(r'\n', '\n')
def get_elf_symbol(sym_name: str):
    if not elf_exists:
        fail(f"{getElfPath()} not found")
    if not sym_name:
        return None
    # find Stubs.c range (horrible)
    with open(f"{getBuildPath()}/RedPepper.map") as f:
        s = StringIO(f.read())
        for line in s:
            if len(line.split()) == 6 and line.split()[5] == 'Stubs.o(stubs)':
                if sym_name == line.split()[0]:
                    return None
    s = StringIO(readelf_data)
    for line in s:
        if "FUNC" in line:
            arr = line.split()
            if sym_name == arr[7]:
                addr = int(arr[1], 16)
                return (addr, int(arr[2]))
    return None

def read_sym_file():
    with open(getFuncSymFile(), newline='') as f:
        syms = []
        reader = csv.reader(f, delimiter=',',quotechar='"')
        for row in reader:
            if not row[0].startswith("0x"):
                continue
            syms.append((int(row[0], 0), row[1], int(row[2]), row[3], row[4]))
        return syms

def get_symbol(symbol: str):
    with open(getFuncSymFile(), newline='') as f:
        reader = csv.reader(f, delimiter=',',quotechar='"')
        for row in reader:
            if not row[0].startswith("0x"):
                continue
            if row[3] == symbol:
                return (int(row[0], 0), row[1], int(row[2]), row[3], row[4])
    return None

def rank_symbol(sym, decomp_sym):
    sym_size = int(sym[2])
    decomp_size = int(decomp_sym[1])

    if decomp_size == 0:
        decomp_size = sym_size

    out = str(subprocess.check_output(f"\"{sys.executable}\" tools/asm-differ/diff.py --format json {sym[0] - 0x00100000} {decomp_sym[0] - 0x00100000} {str(sym_size)} {str(decomp_size)}", shell=True))

    rank = 'O'
    if "diff_change" in out:
        rank = 'm'
    if "diff_add" in out or "diff_remove" in out:
        if out.count('diff_add') == out.count('diff_remove'):
            rank = 'm'
        else:
            rank = 'M'
    
    return rank


def main() -> None:
    if len(sys.argv) != 2:
        fail("diff.py <symbol>")
    symbolname = sys.argv[1]

    symbol = get_symbol(symbolname)
    decomp_symbol = get_elf_symbol(symbolname)

    if (symbol is None):
        fail(f"Couldn't find in csv: {symbol[3]}")
    if (decomp_symbol is None):
        fail(f"Couldn't find in decomp: {symbol[3]}")

    sym_size = int(symbol[2])
    decomp_size = int(decomp_symbol[1])

    if decomp_size == 0:
        print(f"Warning: decomp symbol size for {symbol[3]} is 0. Using the original size instead.")
        decomp_size = sym_size

    subprocess.run(f"\"{sys.executable}\" tools/asm-differ/diff.py {symbol[0] - 0x00100000} {decomp_symbol[0] - 0x00100000} {str(sym_size)} {str(decomp_size)}", shell=True)

if __name__ == "__main__":
    main()
