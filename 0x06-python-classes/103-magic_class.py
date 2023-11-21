#!/usr/bin/python3
"""magic class definition doing as stated by the byte code ."""

import math


class MagicClass:
    """cirle replacement."""

    def __init__(self, radius=0):
        """magic iniliztion.

        Arg:
            radius (float or int): The radius of the new MagicClass.
        """
        self.__radius = 0
        if type(radius) is not int and type(radius) is not float:
            raise TypeError("radius shoul only be number")
        self.__radius = radius

    def area(self):
        """Returns the area of the MagicClass."""
        return (self.__radius ** 2 * math.pi)

    def circumference(self):
        """Returns The circumference of the MagicClass."""
        return (2 * math.pi * self.__radius)
