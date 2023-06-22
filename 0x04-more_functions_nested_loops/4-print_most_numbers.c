#include "main.h"
/**
* print_most_numbers - this function prints digit numbers except 2 and 4
* it takes no parameters
* Return: no return
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		if (i != 2 && i != 4)
			_putchar(i + '0');
	_putchar('\n');
}
