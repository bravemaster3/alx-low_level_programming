#include "main.h"

/**
 * _strlen_recursion - returns the length of a function using recursion
 * @s: pointer to the string
 * Return: the length of the string as integer
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		return (0);
	}
	len = 1 + _strlen_recursion(s + 1);
	return (len);
}
