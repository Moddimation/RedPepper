import os
import sys
import hashlib
from pathlib import Path

ver_detault = "eu"

versions = {
    "eu",
    "eu_d",
    "jp",
    "kr",
    "tw",
    "us",
    "us_d",
}

hashes = {
    "eu": "e1d7e188ff88467df776c17cec45c44857fadf5b699944baa8cddcae7d939e64",
    "eu_d": "184b8804ccf4aea9f447b2278dfc3171d4f8c4e6abf890d7b24680d649e034c6",
    "jp": "885dcaed5994076732b1f99e452a6f06493c23464ae0509ebbf44b8c6fd614a7",
    "kr": "820940dc19b86f8d47515973d9f1484c4efc0571a729c294e85b53e5097fda56",
    "tw": "6207415ee0c6d2dff53d65b39cc2b05318a3b25e62e39639ab2a7243d96357f0",
    "us": "c705711154b1c514d7a0b5d133fabff42834110b198bd4cf86397d0d1c1597e9",
    "us_d": "6016cbdada120b2476e512e8c87c5d525f62ee8daa9f81e00c8caa1237477344"
}

def __getProjDir():
    return os.getcwd().split("tools")[0].split("build")[0].rstrip(os.sep)
def __getVerFile():
    return f"{__getProjDir()}/data/version"

def ger_versions():
    return versions

def is_ver_name(name):
    return name in versions

def is_ver_exist(version):
    return os.path.exists(get_path_bin(version))
    
def get_path_bin(version):
    return __getProjDir() + "/data/ver/" + version + "/code.bin"

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

def get_ver():
    if not os.path.exists(__getVerFile()):
        set_ver(ver_detault)
        print (f"Note: Using default version \'{ver_detault}\'")

    with open(__getVerFile(), 'r') as f:
        ver = f.read()

    if len(ver) < 2:
        print ("Error: invalid version file")

    return ver

def set_ver(version):
    with open(__getVerFile(), 'w') as f:
        f.write(version)
