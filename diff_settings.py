import os
from tools._settings import getExeFile

def apply(config, args):
    config["make_command"] = ["python3", "tools/build.py"]
    config["baseimg"] = getExeFile()
    config["myimg"] = "build/code.bin"
    config["source_directories"] = ["Game", "lib", "data"]
    config["source_extensions"] = [".c", ".h", ".cpp", ".hpp", ".csv"]
    config["arch"] = "armel"
    config["arch_objdump"] = "arm"
    config["objdump_executable"] = os.environ.get('DEVKITARM') + "/bin/arm-none-eabi-objdump"
