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
