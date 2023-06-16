#include <stdio.h>

/**
*main - Entry point
*Print alphabet in reverse
*Return: 0 on success
*/

int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
