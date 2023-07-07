#include "main.h"

/**
 * _puts - prints a given string to the stdout
 * @str: a pointer to a string
 * Return: No return
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
