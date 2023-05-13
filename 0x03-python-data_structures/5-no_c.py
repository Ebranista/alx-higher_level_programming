#!/usr/bin/python3
def no_c(my_string):
    new_lst = [x for x in my_string if x not in ['c', 'C']]
    new_string = ''.join(new_lst)
    return new_string
