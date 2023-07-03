#include "main.h"

/**
 * _strchr - locates a given character in a string
 * @s: the pointer to a string
 * @c: the character to locate
 * Return: the pointer to the first occurrence of c
 */

char *_strchr(char *s, char c)
{
	char *s1 = '\0';

	int i = 0;

	while (*(s + i) != c)
		i++;
	if (*(s + i) == c)
		s1 = s + i;
	else
		s1 = s + i + 1;

	return (s1);
}
