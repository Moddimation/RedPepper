from diff import *
from colorama import Fore
import multiprocessing
import threading
import time
import shutil
import sys

found_flag = False
csv_path = getFuncSymFile()

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

def getRankMsg(prev, now):
    if now == 'O':
        if prev == 'U': return "Perfectly Ok."
        if prev in ('m','M'): return "Now Ok."
        return "Ok."
    if now == 'U':
        if prev == 'O': return "Completely Undefined."
        if prev in ('m','M'): return "Now Undefined."
        return "Not Decompiled."
    if now == 'M':
        if prev == 'O': return "Oops, Now Mismatching."
        if prev == 'U': return "Getting closer, now Mismatching."
        if prev == 'm': return "Made it worse, Mismatching."
        return "Still Mismatching."
    if now == 'm':
        if prev == 'O': return "Change it back, Minor Mismatch."
        if prev == 'U': return "Very close, Minor Mismatch."
        if prev == 'M': return "Getting close, Minor Mismatch."
        return "Still minor Mismatching."
    return '?'

def clear_line():
    print(' ' * shutil.get_terminal_size((80, 20)).columns, end='\r')

def check_syms():
    syms = read_sym_file()
    newsyms = []

    for sym in syms:
        if not sym[3] or len(sym[3]) == 0:
            continue
        decomp_symbol = get_elf_symbol(sym[3])
        if decomp_symbol is None:
            newsyms.append((sym[0], 'U', sym[2], sym[3], sym[4]))
            # Always print symbol name
            clear_line()
            print("Checking " + sym[3], end='\r')
            if sym[1] != 'U':
                # Only print special message if changed
                print(f"{sym[3]} {sym[1]} -> U ({getRankMsg(sym[1],'U')})")
        else:
            rank = rank_symbol(sym, decomp_symbol)
            newsyms.append((sym[0], rank, sym[2], sym[3], sym[4]))
            clear_line()
            print("Checking " + sym[3], end='\r')
            if sym[1] != rank:
                # Only print special message if changed
                print(f"{sym[3]} {sym[1]} -> {rank} ({getRankMsg(sym[1], rank)})")

    with open(csv_path, 'r') as src, open(csv_path + '_b', 'w') as dst:
        dst.write(src.read())

    with open(csv_path, 'w') as f:
        for sym in newsyms:
            f.write(f"0x{sym[0]:08X},{sym[1]},{sym[2]:06d},{sym[3]},{sym[4]}\n")

def check_sym(symbol_name):
    dec = get_elf_symbol(symbol_name)
    if dec is None:
        print(f"Symbol {symbol_name} not found in build.")
        return

    syms = read_sym_file()
    for sym in syms:
        if symbol_name != sym[3]:
            continue

        prevrank = sym[1]
        nowrank = rank_symbol(sym, dec)

        if found_flag and prevrank != nowrank:
            # update CSV
            file = open(csv_path, "r").readlines()
            newline = f"0x{sym[0]:08X},{nowrank},{sym[2]:06d},{sym[3]},{sym[4]}\n"
            for i, line in enumerate(file):
                if symbol_name == line.split(',')[3]:
                    file[i] = newline
                    break
            with open(csv_path, "w") as f:
                f.writelines(file)

            # Always print rank change in literal format for single symbol
            print(f"{prevrank} -> {nowrank} ({getRankMsg(prevrank, nowrank)})")
        else:
            # Print the normal message for unchanged single symbol
            print(getRankMsg(prevrank, nowrank))
        break

def main():
    global found_flag
    global csv_path
    with open(f"{getBuildPath()}/compile_commands.json", "r") as f:
        if any("NON_MATCHING" in line for line in f):
            found_flag = True
    if not found_flag:
        csv_path = getFuncSymFile().rsplit('.csv', 1)[0] + '_test.csv'
        print("Info: TEST MODE. You need to compile without -m (only matching) to rebuild the functions map. This output will be written to data/*_test.csv")

    if len(sys.argv) > 1:
        check_sym(sys.argv[1])
    else:
        start = time.time()
        check_syms()
        clear_line()
        print(f"{int(time.time() - start)}s elapsed")

if __name__ == "__main__":
    main()

