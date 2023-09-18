#include "main.h"

/**
* _abs - computes the absolute value of an integer
* @n: an integer to be turned into its abs.
* Return: the absolute value
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
	}
	return (n);
}
