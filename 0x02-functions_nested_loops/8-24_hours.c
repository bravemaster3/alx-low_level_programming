#include "main.h"

/**
* jack_bauer - prints hours
*
* Return: nothing
*/

void jack_bauer(void)
{
	int h = 0, m, d1, d2, d3, d4;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			d1 = h / 10;
			d2 = h % 10;
			d3 = m / 10;
			d4 = m % 10;
			_putchar(d1 + '0');
			_putchar(d2 + '0');
			_putchar(':');
			_putchar(d3 + '0');
			_putchar(d4 + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
