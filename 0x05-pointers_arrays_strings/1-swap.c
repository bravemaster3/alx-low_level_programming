#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer 1 to an integer
 * @b: pointer 2 to an integer
 * Return: No return
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
