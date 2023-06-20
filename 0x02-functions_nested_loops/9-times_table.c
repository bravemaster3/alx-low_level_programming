#include "main.h"

/**
* times_table - prints the times table from 0 to 9
*
* Return: nothing is returned
*/

void times_table(void)
{
	int i = 0, j, p;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			p = i * j;
			if (j == 0)
			{
				_putchar(p + '0');
				_putchar(',');
			}
			else if (p / 10 > 0)
			{
				_putchar(' ');
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}
			else if (p / 10 == 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}

			if (j > 0 && j < 9)
				_putchar(',');
			if (j == 9)
				_putchar('\n');
			j++;
		}
		i++;
	}
}
