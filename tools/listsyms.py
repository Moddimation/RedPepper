import diff
import check
import sys
import argparse
try:
    import cxxfilt
    is_filter = True
except ImportError:
    is_filter = False

def main():
    argbase = argparse.ArgumentParser(description="List Symbols")
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
    syms = []
    filesyms = diff.read_sym_file()

    for sym in filesyms:
        syms.append(sym)
            
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
                print(f"{rank}: {addr}, {size}")
            else:
                print(f"{addr}: {size}")
            continue
        if args.A:
            if args.R and not args.r:
                print(f"{rank}: {size}, {addr}")
            else:
                print(f"{size}: {addr}")
            continue
            
        if sym[4] and not args.i:
            print(f"{addr}: {size},{rank},{sym[4]}, {sym[3]}")
        else:
            print(f"{addr}: {size},{rank}, {sym[3]}")
    if has_found == False:
        if (len(sys.argv) > 1):
            print ("No symbols found with specified settings.")
        else:
            print ("No symbols found.")

if __name__ == "__main__":
    main()
