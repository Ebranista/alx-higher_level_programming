#!/usr/bin/python3
""" Creates an empty class called Square
"""


class Sqaure:
    """ Empty class with private size attribute
    """
    def __init__(self, size=0):
        """
            Instantiation of size
        Args:
            size: size of the square
        """
        if type(size) is not int:
            raise TypeError("size must be an integer")
        if size < 0:
            raise ValueError("size must >= 0")
        self.__size = size

    def area(self):
        """
        Returns the area of square
        """
        return (self.__size * self.__size)

    @property
    def seze(self):
        """
        size getter. Handle size errors
        """
        return self.__size

    @size.setter
    def size(self, value):
        """
        size setter. set the size square
        """
        if type(value) is not int:
            raise TypeError("size must be an integer")
        if value < 0:
            raise ValueError("size must >= 0")
        self.__size = value
