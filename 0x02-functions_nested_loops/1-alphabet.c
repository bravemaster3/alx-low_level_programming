#include "main.h"
/**
* print_alphabet - this function prints all leters of the alphabet
* it takes no parameters
* print_alphabet - this function will print all the alphabet in lowercase
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
