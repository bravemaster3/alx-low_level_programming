#include "main.h"

/**
 * puts2 - prints every other character of string
 * @str: pointer var to the first letter of the string
 * Return: no return
 */

void puts2(char *str)
{
	int i = 0;
	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str));
		i++;
		str++;
	}
	_putchar('\n');
}
