# Here is how you create a dynamic library

Here is an article that summarizes the steps

https://medium.com/@kenneth.ca95/how-to-create-a-dynamic-library-in-c-baa473148d00

## Creating the library

1. Generate object files with -c, and use -fPIC flag fir making the code position independant
```bash
gcc -c -fPIC *.c
```
2. Put all the object files together into one library, using -shared (for dynamic library) and -o to specify the output name

```bash
gcc -shared -o libdynamic.so *.o
```
The previous steps should have created the library. You can check that everything was done well, and that the right functions were included as dynamic symbols using the following:

```bash
nm -D libdynamic.so
```

Or if you only want to see the functions that you defined,

```bash
nm -D --defined-only libdynamic.so
```

## Using the library

3. Add the library to the environmental variable

```bash
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
```

4. Then, use it when compiling your program where you use those functions

```bash
gcc -L . 0-main.c -l dynamic -o example
```

Note that "dynamic" is the name of the shared library in this case (libdynamic.so)

5. Use in Python

```Python
#!/usr/bin/python3
import ctypes
my_funcs = ctypes.CDLL("./libdynamic.so")
print(my_funcs._abs(-10))
```
