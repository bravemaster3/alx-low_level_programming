#include "main.h"

/**
 * _strncpy - copies string from src to dest, like the official strncpy
 * @dest: pointer to the first char of destination string
 * @src: pointer to the first char of source string
 * @n: number of bytes to use from src
 * Return: pointer to the *dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int size_src = _strlen(src);
	int n2 = n, i;

	if (n >= size_src)
		n2 = size_src;
	else
		n2 = n;

	for (i = 0; i < n2; i++)
	{
		dest[i] = src[i];
	}

	if (n >= size_src)
	{
		for (i = size_src; i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
