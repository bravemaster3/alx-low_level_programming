
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates memory using malloc
 * @ptr: pointer to the previous memory
 * @old_size: old size in bytes
 * @new_size: new size in bytes
 * Return: pointer to the new memory (or old one if nothing happened)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr != NULL)
	{
		if (new_size < old_size)
			strncpy(nptr, ptr, new_size);
		if (new_size > old_size)
			strncpy(nptr, ptr, old_size);
	}
	free(ptr);
	return (nptr);
}
