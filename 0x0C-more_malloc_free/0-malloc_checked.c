#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory and check
 * @b: the size of memory to be allocated in bytes
 * Return: Void pointer
 */

void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		exit(98);
	return ((void *)malloc(b));
}
