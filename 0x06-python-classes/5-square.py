#!/usr/bin/python3
"""squre class definition."""


class Square:
    """squre representation."""

    def __init__(self, size):
        """new squre initilization.

        Args:
            size (int): The size of the new square.
        """
        self.size = size

    @property
    def size(self):
        """Gets the current size of  square."""
        return (self.__size)

    @size.setter
    def size(self, value):
        if not isinstance(value, int):
            raise TypeError("size must be of  an integer")
        elif value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    def area(self):
        """Returns the current area of the square."""
        return (self.__size * self.__size)

    def my_print(self):
        """Print the square with the # symbol."""
        for i in range(0, self.__size):
            [print("#", end="") for j in range(self.__size)]
            print("")
        if self.__size == 0:
            print("")
