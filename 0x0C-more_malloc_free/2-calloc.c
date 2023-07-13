#include "main.h"
#include <stdlib.h>

#include "main.h"

/**
 * _strcpy - copies string pointed to by src to another variable
 * @dest: pointer var to a buffer where to copy the string
 * @src: pointer var to the source of the string to be copied
 * Return: the pointer to dest i.e. the address
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
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
		_strcpy((char *)mem + i, "0");

	return (mem);
}
