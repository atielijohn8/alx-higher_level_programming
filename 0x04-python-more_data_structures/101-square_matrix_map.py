#!/usr/bin/python3
def square_matriy_map(matriy=[]):
    return (list(map(lambda y: list(map(lambda y: y**2, y)), matriy)))
