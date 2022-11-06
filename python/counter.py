import sys
import ctypes

def calculate(n):
    print("ref", ctypes.c_long.from_address(id(calculate)).value)
    if n == 0:
        print(n)
    if n > 0:
        calculate(n - 1)
        k = n** 2
        print(k)

a = 'shazid'

print('a', sys.getrefcount(a))


