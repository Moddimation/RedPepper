import os
from __manVer import get_ver

def getProjDir():
    return os.getcwd().split("tools")[0].split("build")[0].rstrip(os.sep)
def getFuncSymFile():
    return f"{getProjDir()}/data/ver/{get_ver()}/redpepper_functions.csv"
def getDataSymFile():
    return f"{getProjDir()}/data/ver/{get_ver()}/data_symbols.csv"
def getExeFile():
    return f"{getProjDir()}/data/ver/{get_ver()}/code.bin"
def getBuildPath():
    return f"{getProjDir()}/build"
def getElfPath():
    return f"{getBuildPath()}/{getElfName()}"
def getElfName():
    return 'RedPepper.axf'
def getPresetId():
    return 8
