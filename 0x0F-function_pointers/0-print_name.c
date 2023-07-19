#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints name using a callback function
 * @name: pointer to the name string to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
