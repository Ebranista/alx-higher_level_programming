#!/usr/bin/python3
""" Creates an empty class called Square
"""


class Square:
    """ Empty class with size private attribute
    """
    def __init__(self, size=0):
        """
            Instantiation with size
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
        Returns the area of Square
        """
        return (self.__size * self.__size)
