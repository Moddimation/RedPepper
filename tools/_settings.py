import os
from __manVer import get_ver
from pathlib import Path

def getProjDir():
    return Path(os.getcwd().split("tools")[0].split("build")[0].rstrip(os.sep))
def getFuncSymFile():
    return str(Path(getProjDir()) / "data" / "ver" / get_ver() / "redpepper_functions.csv")
def getDataSymFile():
    return str(Path(getProjDir()) / "data" / "ver" / get_ver() / "data_symbols.csv")
def getExeFile():
    return str(Path(getProjDir()) / "data" / "ver" / get_ver() / "code.bin")
def getBuildPath():
    return str(Path(getProjDir()) / "build")
def getElfName():
    return "RedPepper.axf"
def getElfPath():
    return str(Path(getBuildPath()) / getElfName())
def getPresetId():
    return 8
