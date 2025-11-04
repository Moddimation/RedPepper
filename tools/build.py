import os
import subprocess
import multiprocessing
from genLinkerScript import genLDScript
from colorama import Fore, Style
import sys
import shutil
from settings import *
import hashlib
from pathlib import Path
import argparse

def main() -> None:
    def status(msg: str):
        print(Style.BRIGHT + Fore.CYAN + msg + Fore.RESET + Style.RESET_ALL)

    if not os.path.exists(f"{getExeFile()}"):
        print(os.listdir())
        fail("data/code.bin missing. Please provide the code.bin from the EU version.")

    if hashlib.sha256(Path(f"{getExeFile()}").read_bytes()).hexdigest() != "e1d7e188ff88467df776c17cec45c44857fadf5b699944baa8cddcae7d939e64":
        fail("data/code.bin is invalid. Did you dump the right version, correctly? (EU)")

    parser = argparse.ArgumentParser(
        'build.py', description="Build the Super Mario 3D Land decompilation project")
    parser.add_argument('-c', action='store_true',
                        help="Clean before building")
    parser.add_argument('-v', action='store_true',
                        help="Give verbose output")
    args = parser.parse_args()

    if not os.path.isdir(getBuildPath()) or args.c:
        shutil.rmtree(getBuildPath(), ignore_errors=True)
        os.mkdir(getBuildPath())
        os.chdir(getBuildPath())
        cmake_args = ['cmake', "..", '-G', 'Unix Makefiles']

        try:
            subprocess.run(cmake_args, check=True)
        except subprocess.CalledProcessError:
            exit(1)  # silently exit with failure if build failed
        os.chdir("..")

    status("Generating Linker Script")
    genLDScript()

    os.chdir(getBuildPath())

    verbose = ''
    if args.v:
        verbose = 'VERBOSE=1'
    result = subprocess.run(f'make -j {multiprocessing.cpu_count()} {verbose}', shell=True)
    if result.returncode != 0:
        exit(result)

    def fromelf():
        status("Generating code.bin")
        subprocess.run("\"" + os.environ.get('ARMCC_PATH') + f"/bin/fromelf.exe\" --bincombined {getElfName()} --output code.bin", shell=True)

    if os.path.exists(f"{getExeFile()}"):
        if os.path.getmtime(f"{getExeFile()}") < os.path.getmtime(getElfName()):
            fromelf()
    else:
        fromelf()

    if os.path.exists(f'compile_commands.json'):
        shutil.copyfile(f'compile_commands.json', '../compile_commands.json')

    os.chdir(getProjDir())

if __name__ == "__main__":
    main()
