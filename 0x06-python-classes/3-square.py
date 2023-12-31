#!/usr/bin/python3
"""squre class definition."""


class Square:
    """squre representation."""

    def __init__(self, size=0):
        """new squre initilization .

        Args:
            size (int): The size of the new square.
        """
        if not isinstance(size, int):
            raise TypeError("size must be of an integer")
        elif size < 0:
            raise ValueError("size must be >= 0")
        self.__size = size

    def area(self):
        """Returns the current area of the square."""
        return (self.__size * self.__size)
