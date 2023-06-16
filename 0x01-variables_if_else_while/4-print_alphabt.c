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
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
