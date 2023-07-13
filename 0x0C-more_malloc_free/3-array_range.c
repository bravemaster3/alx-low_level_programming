#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - create array from range min-max
 * @min: smallest number in the range
 * @max: greatest number in the range
 * Return: pointer to an integer
 */

int *array_range(int min, int max)
{
	int i, j, n = 0;
	int *arr;

	if (min > max)
		return (NULL);

	while (n <= max - min)
		n++;

	arr = malloc(n * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	for (i = 0, j = min; i < n; i++, j++)
		arr[i] = j;
	return (arr);
}
