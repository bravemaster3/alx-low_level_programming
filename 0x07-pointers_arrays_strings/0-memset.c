#include "main.h"

/**
 * _memset - fills memory with a given byte
 * @s: a pointer
 * @b: a character/byte element
 * @n: an integer giving the number of bytes to fill
 * Return: pointer to the first byte...
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
