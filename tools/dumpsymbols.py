import diff
import check
import sys
import os
import cxxfilt

def main():
    syms = []
    filesyms = diff.read_sym_file()

    for sym in filesyms:
        syms.append(sym)
            
    syms.sort(key=lambda a: a[1])
    for sym in syms:
        a = "{:08X}".format(sym[0])
        name = "(undef)"
        try:
            name = cxxfilt.demangle(sym[3])
        except cxxfilt.InvalidName:
            name = sym[3]
        if not name:
            continue
        print(f"0x{a},{sym[2]},{sym[1]},{sym[4]},{name}")

if __name__ == "__main__":
    main()
