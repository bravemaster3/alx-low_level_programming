#include "main.h"
/**
* print_numbers - this function prints all single digit numbers
* it takes no parameters
* Return: no return
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
