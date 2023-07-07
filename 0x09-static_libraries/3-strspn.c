#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * prefix in s below shoulw contain only characters
 * from accept
 * @s: pointer to a string ([prefix]+[suffix])
 * @accept: pointer to a string for finding prefix
 * Return: the number of bytes of the prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		count = 0;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				count += 1;
		}
		if (count == 0)
			break;
	}

	return (i);
}
