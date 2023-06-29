#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: pointer to the array
 * @n: size of the array, i.e. number of elements
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int a_c[n];
	int i;

	for (i = 0; i < n; i++)
	{
		a_c[i] = a[i];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = a_c[n - 1 - i];
	}
}
