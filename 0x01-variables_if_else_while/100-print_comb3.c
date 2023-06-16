#include <stdio.h>

/**
*main - Entry point
*This script prints combinations of 2 digits...
*Return: 0 on success
*/

int main(void)
{
	int i = 0, j;

	while (i < 9)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar(i + 48);
			putchar(j + 48);
			if (i == 8)
			{
				putchar('\n');
			}
			else
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	return (0);
}
