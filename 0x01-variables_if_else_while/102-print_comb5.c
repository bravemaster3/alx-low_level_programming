#include <stdio.h>

/**
*main - Entry point
*
*Return: 0 on success
*/

int main(void)
{
	int i = 0, j;

	while (i < 100)
	{
		j = 0;
		while (j < 100)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i == 98 && j == 99)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}
