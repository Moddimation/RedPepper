from diff import *
from colorama import Fore
import multiprocessing
import threading
import time
import shutil

def getRankName(rank: str):
    match rank:
        case 'O':
            return Fore.GREEN + "OK" + Fore.RESET
        case 'm':
            return Fore.YELLOW + "Minor problems" + Fore.RESET
        case 'M':
            return Fore.RED + "Major problems" + Fore.RESET
        case 'U':
            return "Undecompiled"
    return '?'

def clear_line():
    print(' ' * shutil.get_terminal_size((80, 20)).columns, end='\r')

def check_syms():
    syms = read_sym_file()
    newsyms = []
    for sym in syms:
        decomp_symbol = get_elf_symbol(sym[3])
        if (decomp_symbol is None): # If decomp doesnt contain it, mark as U (undecompiled) and skip.
            newsyms.append((sym[0], 'U', sym[2], sym[3], sym[4]))
            if (sym[1] != 'U'):
                clear_line()
                print(sym[3] + ' ' + getRankName(sym[1]) + ' -> ' + getRankName('U'))
        else: # Symbol found, check continues
            clear_line()
            print("Checking " + sym[3], end='\r')
            rank = rank_symbol(sym, decomp_symbol) # check and update rank by size
            newsyms.append((sym[0], rank, sym[2], sym[3], sym[4]))
            if (sym[1] != rank):
                clear_line()
                print(sym[3] + ' ' + getRankName(sym[1]) + ' -> ' + getRankName(rank))

    with open(getFuncSymFile(), 'r') as src, open(getFuncSymFile() + '_b', 'w') as dst:
        dst.write(src.read())

    with open(getFuncSymFile(), 'w') as f:
        for sym in newsyms:
            f.write("0x{:08X}".format(sym[0]) + ',' + sym[1] + ',' + "{:06d}".format(sym[2]) + ',' + sym[3] + ',' + sym[4])
            f.write('\n')

def main():
    start = time.time()
    
    check_syms()

    clear_line()
    print(f"{int(time.time() - start)}s elapsed")


if __name__ == "__main__":
    main()
