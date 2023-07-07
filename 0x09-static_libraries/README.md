# Creating a static library

1. Compile all c functions in the current directory without linking (-c flag)
```
gcc -c -Wall -Werror -Wextra -pedantic -c *.c
```
2. Archive all the object files *.o created from the previous step
r option for updating if object exists, c option to create a new one.
```
ar -rc libmy.a *.o
```
3. You can then check the objects included in the library by listing them
```
ar -t libmy.a
```
4. You can also display info about symbols using the nm command
```
nm libmy.a
```
5. The static library is now ready for use. Instead of linking many function files individually, just link the library
-L. (. means current directory, no space between L and the path... You can also write a path instead of "."). Then,
-lname (where name is the library name without the "lib prefix" and the ".a" suffix). e.g. -lmy in this example repository.
You can then use all the other options you want. See an example below
```
gcc -std=gnu89 main.c -L. -lmy -o quote
```

