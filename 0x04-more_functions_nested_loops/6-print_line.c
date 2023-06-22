#include "main.h"

/**
* print_line - prints _ multiple times to make a line
* @n: integer, number of times to print _
* Return: nothing
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
