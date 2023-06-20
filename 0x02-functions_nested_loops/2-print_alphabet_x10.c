#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet 10 times
* arguments: it takes no arguments
*
* Description: The function takes no argument and prints the alphabet 10 times
*/

void print_alphabet_x10(void)
{
	int i, ch;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
