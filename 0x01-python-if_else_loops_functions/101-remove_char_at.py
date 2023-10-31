#!/usr/bin/python3
def remove_char_at(str, n):
    j = ""
    for i in range(len(str)):
        if i != n:
            j = j + str[i]
    return (j)
