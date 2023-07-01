#include "main.h"

/**
 * print_number - prints a number
 * @n: the integer to print
 * Return: No return
 */

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	m = n;

	if (m / 10)
		print_number(m / 10);

	_putchar(m % 10 + '0');
}
