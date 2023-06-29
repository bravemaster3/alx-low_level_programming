#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the first char of destination string
 * @src: pointer to the first char of source string
 * Return: pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	const int size_dest = _strlen(dest);
	const int size_src = _strlen(src);

	for (i = 0; i <= size_src - 1; i++)
	{
		j = size_dest + i;
		dest[j] = src[i];
	}
	dest[j + 1] = '\0';

	return (dest);
}
