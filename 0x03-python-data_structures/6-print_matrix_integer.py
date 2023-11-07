#!/usr/bin/python3

def print_matrix_integer(matrix=[[]]):
    for value in range(len(matrix)):
        for j in range(len(matrix[value])):
            if j != 0:
                print(" ", end='')
            print("{:d}".format(matrix[value][j]), end='')
        print()
