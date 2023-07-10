#include "main.h"
#include <stdlib.h>

/**
 * _strlen_recursion - returns the length of a function using recursion
 * @s: pointer to the string
 * Return: the length of the string as integer
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	len = 1 + _strlen_recursion(s + 1);
	return (len);
}

/**
 * _strdup - duplicates a string
 * @str: pointer to the string to duplicate
 * Return: pointer to the copy of the string
 */

char *_strdup(char *str)
{
	char *str_cpy;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = _strlen_recursion(str) + 1;

	str_cpy = malloc(sizeof(*str_cpy) * len);
	for (i = 0; i < len; i++)
		str_cpy[i] = str[i];

	return (str_cpy);
}
