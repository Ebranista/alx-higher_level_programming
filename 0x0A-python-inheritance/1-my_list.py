#!/usr/bin/python3
"""
    1-my_list: class MyList
"""


class MyList(list):
    """
        This class inherits from list.
        Attributes:
        Methods:
            print_sorted - prints the list  in ascending order
    """
    def print_sorted(self):
        """
            prints all lists in ascending order
        """
        print(sorted(self))
