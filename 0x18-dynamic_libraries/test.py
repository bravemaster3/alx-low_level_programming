#!/usr/bin/python3
import ctypes
my_funcs = ctypes.CDLL("./libdynamic.so")
print(my_funcs._abs(-10))
