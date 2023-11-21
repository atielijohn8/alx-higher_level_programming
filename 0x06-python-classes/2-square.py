#!/usr/bin/python3
"""squre class definition."""


class Square:
    """squre representation."""

    def __init__(self, size=0):
        """initilizaton of a new squre.

        Args:
            size (int): The size of the new square.
        """
        if not isinstance(size, int):
            raise TypeError("size must be of an integer")
        elif size < 0:
            raise ValueError("size must be >= 0")
        self.__size = size
