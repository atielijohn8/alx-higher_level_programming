#!/usr/bin/python3
def safe_function(fct, *args):
    import sys
    try:
        j = fct(*args)
    except Exception as x:
        sys.stderr.write("Exception: {}\n".format(x))
        j = None
    return (j)
