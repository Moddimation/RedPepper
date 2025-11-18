import os
import subprocess
import multiprocessing
from colorama import Fore, Style
import sys
import shutil
import hashlib
import argparse

from __genLinkerScript import genLDScript
from __genObjdiffFile import genObjdiff
from __utilsVer import *
from _settings import *

def main() -> None:
    def status(msg: str):
        print(Fore.CYAN + msg + Fore.RESET + Style.RESET_ALL)

    parser = argparse.ArgumentParser('build.py', description="Build the Super Mario 3D Land decompilation project")
    parser.add_argument("version", nargs="?", default=None, help="Version to use")
    parser.add_argument('-c', action='store_true', help="Clean before building")
    parser.add_argument('-v', action='store_true', help="Give verbose output")
    parser.add_argument('-m', action='store_true', help="Compile only matching code (BROKEN)")
    args = parser.parse_args()

    version = args.version
    if version is None or len(version) == 0:
        version = get_ver()
    else:
        if is_ver_name(version):
            set_ver(version)
        else:
            print (f"Passed argument \'{version}\' is not a valid version!")
            print (f"Available versions: {get_versions()}")
            version = get_ver()

    if not is_ver_exist(version):
        print(f"data/ver/{version}/code.bin missing. Please provide the code.bin from the {version} version.")
        return

    if not is_ver_valid(version):
        print(f"code.bin for {version} is invalid. Did you dump the right version, correctly?")
        return

    if not os.path.isdir(getBuildPath()) or args.c:
        shutil.rmtree(getBuildPath(), ignore_errors=True)
        os.mkdir(getBuildPath())
        os.chdir(getBuildPath())
        cmake_args = ['cmake', "..", '-G', 'Unix Makefiles']
        if args.m == False:
            cmake_args.append("-DNON_MATCHING=1")

        try:
            subprocess.run(cmake_args, check=True)
        except subprocess.CalledProcessError:
            exit(1)
        os.chdir("..")

    status ("Generating linker.ld ...")
    genLDScript()
    if not os.path.exists(getBuildPath() + "/linker.ld"):
        status ("No linker file generated.")
        return

    os.chdir(getBuildPath())

    verbose = ''
    if args.v:
        verbose = 'VERBOSE=1 '
    result = subprocess.run(f'make -j {multiprocessing.cpu_count()} {verbose}', shell=True)
    if result.returncode != 0:
        exit(result)

    def fromelf():
        status("Generating code.bin ...")
        subprocess.run("\"" + os.environ.get('ARMCC_PATH') + f"/bin/fromelf.exe\" --bincombined {getElfName()} --output code.bin", shell=True)

    if os.path.exists(f"{getExeFile()}") and (os.path.getmtime(f"{getExeFile()}") < os.path.getmtime(getElfName())):
        fromelf()
    else:
        fromelf()

    if os.path.exists(f'compile_commands.json'):
        shutil.copyfile(f'compile_commands.json', '../compile_commands.json')

    os.chdir(getProjDir())

    #status("Generating objdiff.json ...")
    #genObjdiff()

if __name__ == "__main__":
    main()
