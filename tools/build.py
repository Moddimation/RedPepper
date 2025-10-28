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

def status(msg: str):
    print(Style.BRIGHT + Fore.CYAN + msg + Fore.RESET + Style.RESET_ALL)

if not os.path.exists("data/code.bin"):
    fail("data/code.bin missing. Please provide the code.bin from the EU version.")

if hashlib.sha256(Path("data/code.bin").read_bytes()).hexdigest() != "e1d7e188ff88467df776c17cec45c44857fadf5b699944baa8cddcae7d939e64":
    fail("data/code.bin is invalid. Did you dump the right version, correctly? (EU)")

if len(sys.argv) >= 2 and sys.argv[1] == 'clean':
    shutil.rmtree(getBuildPath())

if not os.path.exists(getBuildPath()):
    os.mkdir(getBuildPath())
    os.chdir(getBuildPath())
    subprocess.run("cmake .. -G \"Unix Makefiles\"", shell=True)
    os.chdir('..')

status("Generating Linker Script")
genLDScript()

os.chdir(getBuildPath())

verbose = ''
if len(sys.argv) >= 2 and sys.argv[1] == 'verbose':
    verbose = 'VERBOSE=1'
result = subprocess.run(f'make -j {multiprocessing.cpu_count()} {verbose}', shell=True)
if result.returncode != 0:
    exit()

def fromelf():
    status("Generating code.bin")
    subprocess.run("\"" + os.environ.get('ARMCC_PATH') + f"/bin/fromelf.exe\" --bincombined {getElfName()} --output code.bin", shell=True)

if os.path.exists('data/code.bin'):
    if os.path.getmtime('data/code.bin') < os.path.getmtime(getElfName()):
        fromelf()
else:
    fromelf()

if os.path.exists(f'compile_commands.json'):
    shutil.copyfile(f'compile_commands.json', '../compile_commands.json')
