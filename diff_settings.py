import os
from tools.verutils import *

def apply(config, args):
    config["make_command"] = ["python3", "tools/build.py"]
    config["baseimg"] = f"data/ver/{get_ver()}/code.bin"
    config["myimg"] = "build/code.bin"
    config["source_directories"] = ["Game", "lib", "data"]
    config["arch"] = "armel"
    config["arch_objdump"] = "arm"
    config["objdump_executable"] = os.environ.get('DEVKITARM') + "/bin/arm-none-eabi-objdump"
