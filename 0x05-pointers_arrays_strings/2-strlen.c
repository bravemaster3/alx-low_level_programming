#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the pointer to a string
 * Return: the length of the string that s points to
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
