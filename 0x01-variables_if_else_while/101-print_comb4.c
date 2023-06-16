#include <stdio.h>

/**
*main - Entry point
*This script prints combinations of 3 digits...
*Return: 0 on success
*/

int main(void)
{
	int i = 0, j, k;

	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k < 10)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
				if (i == 7)
				{
					putchar('\n');
				}
				else
				{
					putchar(44);
					putchar(32);
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
