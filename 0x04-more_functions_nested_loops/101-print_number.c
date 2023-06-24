#include "main.h"

/**
* print_number - prints any given integer
* @n: a given integer, I will use already recursion here
* Return: nothing
*/

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else
		m = n;
	if (m / 10)
	{
	print_number(m / 10);
	}
	_putchar(m % 10 + '0');
}
