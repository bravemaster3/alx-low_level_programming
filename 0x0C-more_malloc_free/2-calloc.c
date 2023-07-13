#include "main.h"
#include <stdlib.h>

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

/**
 * _calloc - allocate memory and zero all bytes
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: void pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i <= nmemb * size; i++)
		_memset((char *)mem, 0, nmemb * size / sizeof(int));

	return (mem);
}
