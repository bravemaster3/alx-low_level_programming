#include "main.h"

/**
 * _strncat - concatenates two strings, not necessarily all of src
 * @dest: pointer to the first char of destination string
 * @src: pointer to the first char of source string
 * @n: number of bytes to use from src
 * Return: pointer to the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, n2 = n;
	const int size_dest = _strlen(dest);
	const int size_src = _strlen(src);

	if (n > size_src)
	{
		n2 = size_src;
	}
	for (i = 0; i < n2; i++)
	{
		j = size_dest + i;
		dest[j] = src[i];
	}

	return (dest);
}
