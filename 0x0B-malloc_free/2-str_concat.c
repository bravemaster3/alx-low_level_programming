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
 * str_concat - concatenates 2 strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *s1_cpy, *s2_cpy, *concat;
	int i = 0, j = 0, len1, len2;

	if (s1 == NULL)
		s1_cpy = "";
	else
		s1_cpy = s1;

	if (s2 == NULL)
		s2_cpy = "";
	else
		s2_cpy = s2;

	len1 = _strlen_recursion(s1);
	len2 = _strlen_recursion(s2);

	concat = malloc(sizeof(*s1_cpy) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	while (i < len1)
	{
		concat[i] = s1_cpy[i];
		i++;
	}

	while (j < len2)
	{
		concat[i + j] = s2_cpy[j];
		j++;
	}
	concat[i + j] = '\0';

	return (concat);
}
