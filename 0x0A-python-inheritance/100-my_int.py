#!/usr/bin/python3

"""Defines a class MyInt that inherits from int."""


class MyInt(int):
    """Custom int class with inverted == and != operators."""

    def __eq__(self, value):
        """Override == opeartor with != behavior."""
        return self.real != value

    def __ne__(self, value):
        """Override != operator to behave as ==."""
        return self.real == value
