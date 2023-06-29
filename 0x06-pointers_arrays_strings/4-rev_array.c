#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: pointer to the array
 * @n: size of the array, i.e. number of elements
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int copy, i = 0, j = n - 1;

	while (j >= 0 && i < j)
	{
		copy = a[i];
		a[i] = a[j];
		a[j] = copy;
		i++;
		j--;
	}
}
