# RedPepper
 
This is a decompilation of the EU version of Super Mario 3D Land (note that retail JP, KO, TW, and US versions are nearly identical).  
Multi version support is planned, but not being added in the near future.  
It is also fork from the repo on 3dsdecomp's github, and recieved some structural updates.

## Progress

<img src ="https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/RedPepperDec/RedPepper/master/data/stats/Code.json&style=flat-square"/> <img src ="https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/RedPepperDec/RedPepper/master/data/stats/Total.json&style=flat-square"/>

<img src ="https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/RedPepperDec/RedPepper/master/data/stats/OK.json&style=flat-square"/> <img src ="https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/RedPepperDec/RedPepper/master/data/stats/NonMatching.json&style=flat-square"/>

![Progress](data/stats/Progress.png)

## How To

As noted earlier, this fork made some updates regarding structure of some files.  
- code.bin goes to the data/ folder.  
- symbol files are gone, instead use the .csv files inside of the data/ folder.  

### Prequesites
    - Linux setup/Windows setup with CMake and GNU make
    - ARM C/C++ Compiler, 4.1 [Build 894]
    - Python 3.10
    - CMake >= 3.24
    - code.bin extracted from Super Mario 3D Land (EU)

### Setup
- Clone this repository recursively using ```git clone https://github.com/RedPepperDec/RedPepper.git --recursive```
- Place the code.bin file in data/code.bin
    - If you didnt install ther ARM Compiler yet, put it to a path like `/opt/armcc/` or `C:\ARMCC\`
    - Set the armcc directory as ARMCC_PATH
  
You also need japanese locale installed, shift jis if possible.  
##### Windows:  
Just make sure the japanese language is installed.
##### Linux:
    - Debian/Ubuntu:  
```bash
sudo apt update
sudo apt install language-pack-ja
sudo locale-gen ja_JP.SJIS
sudo update-locale
```
    - Arch:
```bash
sudo nano /etc/locale.gen   # uncomment: ja_JP.SJIS
sudo locale-gen
```

### Tools
The tools use python, and in the tools/ directory of this repository.  
#### build.py
```python tools/build.py [-c][-v]```
Sets the build folder, and builds the project.  
- `-c` to delete the build folder, to reset it
- `-v` to see advanced information during compilation

#### diff.py
```python tools/diff.py <symbol>```
Start asm-differ, a cli interface to check the assembly of a function. 

#### upload.py
```python tools/upload.py <symbol>```
Upload a specific function to decomp.me

#### check.py
```python tools/check.py [-f][-s] [symbol]```
Check and update the csv function map.
- `-f` to avoid rank checks, makes it faster (includes -s)
- `-s` to stop it from writing the file, simulation mode
- 'symbol' to only check a specific symbol

#### listsyms.py
```python tools/listsyms.py [...]```
List symbols with different options.  
Please check the output of --help, as the options are rather large.

## SHASUM
(eu) `code.bin: e1d7e188ff88467df776c17cec45c44857fadf5b699944baa8cddcae7d939e64`

## Links

- [Discord Server](https://discord.gg/wK4ZKa9QXq)
- [Wiki](https://al.littun.co/decomp)
- [decomp.me](https://decomp.me/preset/8)

## Credits
- [open-ead/sead](https://github.com/open-ead/sead)
- [original repo on 3dsdecump](https://github.com/3dsdecomp/RedPepper)
