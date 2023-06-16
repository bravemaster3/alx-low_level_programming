#include <stdio.h>

/**
*main - Entry point
*Print all combinations
*Return: 0 on success
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + 48);
		if (i != 9)
		{
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar('\n');
		}
		i++;
	}
	return (0);
}
