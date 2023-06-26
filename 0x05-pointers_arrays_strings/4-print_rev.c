#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the pointer variable to the string
 * Return: No return
 */
void print_rev(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	counter -= 1;
	while (counter >= 0)
	{
		_putchar(*(--s));
		counter--;
	}
	_putchar('\n');
}
