#include <stdio.h>

/**
*main - Entry point
*
*Return: 0 on success
*/

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
