#!/usr/bin/python3
def safe_print_integer(value):
    try:
        formatted_num = "{:d}".format(value)
        print(formatted_num)
        return True
    except Exception as e:
        return False
