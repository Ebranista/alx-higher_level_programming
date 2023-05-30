#!/usr/bin/python3
""" Creates an empty class called Square
"""


class Square:
    """ Empty class with size private attribute
    """
    def __init__(self, size):
        """
            Insitantiation with size
        Args:
            size: size of square
        """
        if type(size) is not int:
            raise TypeError("size must be an integer")
        if size < 0:
            raise ValueError("size must be >= 0")
        self.__size = size
