import os
import sys
import hashlib
from pathlib import Path
from __manVer import *

def get_versions():
    return versions

def is_ver_name(name):
    return name in versions

def is_ver_exist(version):
    return os.path.exists(get_path_bin(version))
    
def _getProjDir():
    return os.getcwd().split("tools")[0].split("build")[0].rstrip(os.sep)
def get_path_bin(version):
    return _getProjDir() + "/data/ver/" + version + "/code.bin"

def is_ver_valid(version):
    if not is_ver_name(version):
        return False

    return hashlib.sha256(Path(get_path_bin(version)).read_bytes()).hexdigest() == hashes[version]

def get_file_ver(path):
    hash = hashlib.sha256(Path(path).read_bytes()).hexdigest()

    for key, value in hashes.items():
        if value == target_hash:
            return key

    return Null

def sort_bin_if_exist():
    try_bin_path = _getProjDir() + "/data/code.bin"
    if not os.path.exists(try_bin_path):
        return Null

    # Check version
    ver = get_file_ver(try_bin_path)
    if ver == Null:
        print("data/code.bin does not correspond to any known version.")
        print("list of versions with SHA256:")
        for k, v in hashes.items():
            print(k + ": " + v)
        sys.exit(1)
        return Null

    # Move file
    dest_file_path = get_path_bin(ver)
    os.rename(try_bin_path, dest_file_path)

    return ver
