import check
import diff
import sys
import argparse
try:
    import cxxfilt
    is_filter = True
except ImportError:
    is_filter = False
from settings import *
from io import StringIO

def main():
    argbase = argparse.ArgumentParser(description="List Symbols")
    argbase.add_argument('-e', action='store_true', help='List compiled symbols instead of csv symbols')
    argbase.add_argument('-w', action='store_true', help='When using -e, only list symbols not in the csv')
    argbase.add_argument('-c', action='store_true', help='When using -e, compare address with csv, not compatible with -w')
    argbase.add_argument('-m', action='store_true', help='When using -e with -c, also only print non-matching')
    argbase.add_argument('-n', action='store_true', help='Only list names')
    argbase.add_argument('-a', action='store_true', help='Only list addr+name')
    argbase.add_argument('-A', action='store_true', help='Only list name+addr')
    argbase.add_argument('-R', action='store_true', help='When using one of the above, also list rank')
    argbase.add_argument('-d', action='store_true', help='Try demangling symbols (pip install cxxfilt)')
    argbase.add_argument('-s', action='store_true', help='Sort symbols alphabetically (mangled state)')
    argbase.add_argument('-i', action='store_true', help='Dont show special marker')
    argbase.add_argument('-zs', action='store_true', help='Show size as decimal')
    argbase.add_argument('-za', action='store_true', help='Show address as decimal')
    argbase.add_argument('-r', type=str, help='Only list symbols with specific ranking (O, m, M, U)')
    args = argbase.parse_args()

    has_found = False
    csv_names = []
    if args.w:
        syms = diff.read_sym_file()
        csv_names = []
        for sym in syms:
            name=sym[3]
            if not name or name is None:
                continue
            csv_names.append(name)

    if args.e:
        if args.c:
            print("elf / csv")
        for line in StringIO(diff.readelf_data):
            if "FUNC" in line:
                sym = line.split()

                name = sym[7]
                addr = int(sym[1], 16)
                size = sym[2]

                if not args.zs:
                    size = "0x{:04X}".format(int(sym[2]))
                if not args.za:
                    addr = "0x{:08X}".format(int(sym[1], 16))
                if args.d and is_filter:
                    try:
                        name = cxxfilt.demangle(sym[3])
                    except cxxfilt.InvalidName:
                        name = sym[3]

                if not name or name is None:
                    continue
                if args.w:
                    if name in csv_names:
                        continue
                has_found = True

                csv_sym = diff.get_symbol(sym[7])
                ex = ""
                if not args.w and ( csv_sym == None or csv_sym[1] != 'O' ):
                    ex = " (U)"
                if args.w:
                    print(f"{addr}: {name}")
                    continue
                if args.c:
                    if csv_sym == None:
                        continue
                    csvaddr = csv_sym[0]
                    csvsize = csv_sym[2]
                    if args.m:
                        if (int(csvaddr) == int(addr, 16)) and (int(csvsize) == int(size,16)):
                            continue
                    if not args.za:
                        csvaddr = "0x{:08X}".format(csv_sym[0])
                    if not args.zs:
                        csvsize = "0x{:04X}".format(csv_sym[2])
                    print(f"{addr}:{size}/{csvaddr}:{csvsize}: {name}")
                    continue
                if args.n:
                    print(f"{name}{ex}")
                    continue
                if args.a:
                    print(f"{addr}:{size}: {name}{ex}")
                    continue
                if args.A:
                    print(f"{size}:{addr}: {name}{ex}")
                    continue
                    
                print(f"{addr}: {size}, {name}{ex}")
        return

    syms = diff.read_sym_file()
    if args.s:
        syms.sort(key=lambda a: a[1])
    for sym in syms:
        addr = sym[0]
        rank = sym[1]
        size = sym[2]
        name = sym[3]

        if not name or name is None:
            continue
        if not args.r is None:
            if rank != args.r:
                continue
        has_found = True

        if not args.zs:
            size = "0x{:04X}".format(sym[2])
        if not args.za:
            addr = "0x{:08X}".format(sym[0])
        if args.d and is_filter:
            try:
                name = cxxfilt.demangle(sym[3])
            except cxxfilt.InvalidName:
                name = sym[3]

        if args.n:
            if args.R and not args.r:
                print(f"{rank}: {name}")
            else:
                print(name)
            continue
        if args.a:
            if args.R and not args.r:
                print(f"{rank}: {addr}, {size}: {name}")
            else:
                print(f"{addr}: {size}: {name}")
            continue
        if args.A:
            if args.R and not args.r:
                print(f"{rank}: {size}, {addr}: {name}")
            else:
                print(f"{size}: {addr}: {name}")
            continue
            
        if sym[4] and not args.i:
            print(f"{addr}: {size},{rank},{sym[4]}: {name}")
        else:
            print(f"{addr}: {size},{rank}: {name}")
    if has_found == False:
        if (len(sys.argv) > 1):
            print ("No symbols found with specified settings.")
        else:
            print ("No symbols found.")

if __name__ == "__main__":
    main()
