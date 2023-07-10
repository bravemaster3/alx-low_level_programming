#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size size, initialized with char c
 * @size: unsigned integer, size of the array
 * @c: character to be used for initialization
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(*str) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
