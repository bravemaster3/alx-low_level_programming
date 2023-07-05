#include "main.h"

/**
 * _puts_recursion - prints string using recursion and no loop!
 * @s: a pointer to a string
 * Return: No return
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*(s));
	_puts_recursion(s + 1);
}
