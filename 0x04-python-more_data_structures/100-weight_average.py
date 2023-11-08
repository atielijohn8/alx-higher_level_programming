#!/usr/bin/python3
def weight_average(my_list=[]):
    if my_list and len(my_list):
        sum_num = 0
        sum_denom = 0
        for tup in my_list:
            sum_num += (tup[0] * tup[1])
            sum_denom += (tup[1])
        return (sum_num/sum_denom)
    return 0
