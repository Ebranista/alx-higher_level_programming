def safe_print_list_integers(my_list=[], x=0):
    count = 0
    try:
        for i in range(x):
            if type(my_list[i]) == int:
                formatted_num = "{:d}".format(my_list[i])
                print(formatted_num, end=" ")
                count += 1
    except IndexError:
        pass
    print()
    return count
