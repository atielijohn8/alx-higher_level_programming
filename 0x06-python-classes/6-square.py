#!/usr/bin/python3
"""squre class definition."""


class Square:
    """squre representation."""

    def __init__(self, size=0, position=(0, 0)):
        """new squre initilization.

        Args:
            size (int): The size of  new square.
            position (int, int): The position of new square.
        """
        self.size = size
        self.position = position

    @property
    def size(self):
        """Gets the current size the square."""
        return (self.__size)

    @size.setter
    def size(self, value):
        if not isinstance(value, int):
            raise TypeError("size must be of an integer")
        elif value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    @property
    def position(self):
        """Gets the current position the square."""
        return (self.__position)

    @position.setter
    def position(self, value):
        if (not isinstance(value, tuple) or
                len(value) != 2 or
                not all(isinstance(num, int) for num in value) or
                not all(num >= 0 for num in value)):
            raise TypeError("position must be tuple of 2 positive integers")
        self.__position = value

    def area(self):
        """Returns the current area of the square."""
        return (self.__size * self.__size)

    def my_print(self):
        """Print the square with the # symbol."""
        if self.__size == 0:
            print("")
            return

        [print("") for i in range(0, self.__position[1])]
        for i in range(0, self.__size):
            [print(" ", end="") for j in range(0, self.__position[0])]
            [print("#", end="") for k in range(0, self.__size)]
            print("")
