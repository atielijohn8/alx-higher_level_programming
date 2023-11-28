#!/usr/bin/python3
"""definition of locked class."""


class LockedClass:
    """
    Prevent the user from calling new LockedClass attributes
    for anything but attribtes called (first_name).
    """

    __slots__ = ["first_name"]
