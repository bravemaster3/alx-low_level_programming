#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Function for applying a callback function to an array
 * @array: pointer to an integer array
 * @size: Array size
 * @action: pointer to function that takes an integer and returns nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
