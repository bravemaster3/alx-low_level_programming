#include "main.h"

/**
 * print_binary - prints a binary representation of an unint
 * @n: the unsigned integer
 * Return: No return
 */

void print_binary(unsigned long int n)
{
	int bits = sizeof(unsigned int) * 8;
	int found_first_one = 0, i;
	unsigned long int mask;

	if (n == 0)
		_putchar('0');

	for (i = bits - 1; i >= 0; i--)
	{
		mask = 1u << i;

		if (n & mask)
		{
			_putchar('1');
			found_first_one = 1;
		}
		else
		{
			if (found_first_one)
				_putchar('0');
		}
	}
}
