#!/usr/bin/python3

def magic_calculation(a, b):
    j = 0
    for x in range(1, 3):
        try:
            if x > a:
                raise Exception('Too far')
            else:
                j += a ** b / x
        except:
            j = b + a
            break
    return (j)
