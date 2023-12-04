#!/usr/bin/python3
"""Module Mylist
Creates a class, which inherits from list class
"""


class MyList(list):
    """A class MyList inherits from list"""

    def print_sorted(self):
        """Prints the list, in ascending order"""

        new_list = self[:]
        new_list.sort()
        print("{}".format(new_list))
