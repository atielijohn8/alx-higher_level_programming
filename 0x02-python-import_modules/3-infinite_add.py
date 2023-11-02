#!/usr/bin/python3
import sys

if __name__ == "__main__":
    total = 0
    for i in range(1, len(sys.argv)):
        try:
            arg = int(sys.argv[i])
            total += arg
        except ValueError:
            print("Argument {} is not a valid integer.".format(i))

    print("{}".format(total))
