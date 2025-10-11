from time import sleep
from diff import *
from colorama import Fore
import json

import datetime
from git import Repo
import io
import matplotlib
import matplotlib.pyplot as plt
import matplotlib.ticker
import numpy as np
import sys

def get_matching_bytes(orig: str, other: str):
    matching = 0
    with open(orig, 'rb') as orig_file:
        with open(other, 'rb') as other_file:
            while (b := orig_file.read(4)):
                if other_file.read(4) == b:
                    matching += 4
    return matching

def main():

    syms_undefined = 0
    syms_major = 0
    syms_minor = 0
    syms_ok = 0
    syms_total = 0
    bytes_ok = get_matching_bytes("data/code.bin", getBuildPath() + "/code.bin")
    code_bin_size = os.path.getsize('data/code.bin')

    syms = read_sym_file()
    for sym in syms:
        if len(sym[3]) == 0: # if no name, skip.
            continue

        syms_total += 1
        match sym[1]:
            case 'U':
                syms_undefined += 1
            case 'M':
                syms_major += 1
            case 'm':
                syms_minor += 1
            case 'O':
                syms_ok += 1

    def print_type(name: str, amount: str, number_color: Fore):
        print(name + ": " + (32 - len(name) - 2 ) * " " + number_color + amount + Fore.RESET)
    def write_type(rank: str, name: str, amount: str, color: str):
        out = {
            "label": name,
            "message": amount,
            "color": color,
            "schemaVersion": 1
        }
        with open('data/stats/' + rank + '.json','w') as f:
            f.write(json.dumps(out))


    bytes_ok_str = "{:.4f}% ({:,} bytes/{:,} bytes)".format((bytes_ok / code_bin_size) * 100, int(bytes_ok), int(code_bin_size))

    print_type("Total Functions", str(syms_total), Fore.RESET);
    print_type("Matching", str(syms_ok), Fore.GREEN);
    print_type("Non-matching", str(syms_ok + syms_major + syms_minor), Fore.YELLOW);
    print_type("code.bin", bytes_ok_str, Fore.CYAN);

    write_type('Total', "Total Functions", str(syms_total), 'inactive');
    write_type('OK', "Matching", str(syms_ok), "success");
    write_type('NonMatching', "Non-matching", str(syms_ok + syms_major + syms_minor), "yellow");
    write_type('Code', "code.bin", bytes_ok_str, "informational");

    x_values = [datetime.datetime.now()]
    y_values = [(bytes_ok / code_bin_size) * 100]

    np.seterr(all="ignore")
    repo = Repo(".")
    for commit in repo.iter_commits():
        file = None
        try:
            file = commit.tree / 'data' / 'stats' / 'Code.json'
        except:
            break
        with io.BytesIO(file.data_stream.read()) as f:
            x_values.append(datetime.datetime.fromtimestamp(commit.committed_date))
            y_values.append(float(json.loads(f.read().decode('utf-8'))['message'].split('%')[0]))

    fig,ax = plt.subplots()

    dates = matplotlib.dates.date2num(x_values)
    ax.set_title("Progress")
    ax.xaxis.set_major_formatter(matplotlib.dates.ConciseDateFormatter(ax.xaxis.get_major_locator()))
    ax.yaxis.set_major_formatter(matplotlib.ticker.PercentFormatter())
    ax.plot_date(dates, y_values, '-')

    plt.savefig('data/stats/Progress.png')

    if 'show' in sys.argv:
        import mplcursors
        mplcursors.cursor(ax, hover=True)
        plt.show()


if __name__ == "__main__":
    main()
