#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array of size "size"
 * @size: number of elements of array
 * @cmp: pointer to function
 * Return: the index for the match of the cmp function, -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
