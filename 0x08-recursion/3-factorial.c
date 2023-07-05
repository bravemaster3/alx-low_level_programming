#include "main.h"
/**
 * factorial - calculates the factorial of a positive number
 * @n: integer whose factorial to calculate
 * Return: the calculated factorial or -1 when n is negative
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
