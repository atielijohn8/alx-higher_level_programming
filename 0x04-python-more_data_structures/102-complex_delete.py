#!/usr/bin/python3
def complex_delete(a_dictionary, key):
    list_keys = list(a_dictionary.keys())

    for key_dic in list_keys:
        if key == a_dictionary.get(key_dic):
            del a_dictionary[key_dic]

    return (a_dictionary)
