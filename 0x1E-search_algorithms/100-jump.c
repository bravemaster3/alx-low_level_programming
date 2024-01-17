#include "search_algos.h"
/**
 * jump_search - Perform Jump search on a sorted array of integers.
 *
 * @array: Pointer to the first element of the sorted array to search in.
 * @size: The number of elements in the array.
 * @value: The integer value to search for in the array.
 *
 * Return: The index where the specified value is located in the array.
 *		   If the value is not present or if the array is NULL, return -1.
 *
 * Description:
 * This function implements the Jump search algorithm to efficiently search
 * for a specified value in a sorted array of integers. The algorithm uses
 * the square root of the array size as the jump step and prints each value
 * in the array that is compared to the search value.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t start, step, next;

	if (!array)
		return (-1);

	step = (size_t)sqrt(size);
	for (start = 0; start < size; start += step)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);

		if (array[start] == value)
			return (start);

		if ((start + step < size && array[start + step] >= value) ||
		start + step >= size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
				   start, start + step);

			for (next = start; next <= start + step; next++)
			{
				if (next >= size)
					return (-1);

				printf("Value checked array[%ld] = [%d]\n",
					   next, array[next]);

				if (array[next] == value)
					return (next);
			}
		}
	}

	return (-1);
}
