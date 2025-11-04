import os

def getProjDir():
    return os.getcwd().split("tools")[0].split("build")[0].rstrip(os.sep)
def getBuildPath():
    return f"{getProjDir()}/build"
def getFuncSymFile():
    return f"{getProjDir()}/data/redpepper_functions.csv"
def getDataSymFile():
    return f"{getProjDir()}/data/data_symbols.csv"
def getExeFile():
    return f"{getProjDir()}/data/code.bin"
def getElfPath():
    return f"{getBuildPath()}/{getElfName()}"
def getElfName():
    return 'RedPepper.axf'
def getPresetId():
    return 8
