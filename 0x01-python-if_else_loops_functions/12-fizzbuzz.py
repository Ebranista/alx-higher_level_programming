#!/usr/bin/python3
def fizzbuzz():
    for count in range(1, 101):
        if count % 3 == 0 and count % 5 == 0:
            print("FizzBuzz ", end="")
        elif count % 5 == 0:
            print("Buzz ", end="")
        elif count % 3 == 0:
            print("Fizz ", end="")
        else:
            print('%d ' % (count), end="")
