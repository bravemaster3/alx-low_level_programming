#include "search_algos.h"
/**
 * linear_search - Searches an int in an array using linear search
 * @array: pointer to the array
 * @size: the size of the array
 * @value: the value to be found
 * Return: first index of value, or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int checked;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		checked = array[i];
		printf("Value checked array[%ld] = [%d]\n", i, checked);
		if (checked == value)
			return (i);
	}
	return (-1);
}
