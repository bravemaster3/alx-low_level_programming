#include <stdio.h>

/**
*main - Entry point
*This function prints numbers
*Return: 0 on success
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + 48);
		i++;
	}
	putchar('\n');
	return (0);
}
