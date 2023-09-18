#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates substring needle in haystack
 * @haystack: string where to find needle
 * @needle: string to locate in haystack
 * Return: the pointer to the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, counter;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *needle)
		{
			counter = 0;
			for (j = 0; *(needle + j) && *(haystack + i + j);
				 j++)
			{
				if (*(haystack + i + j) == *(needle + j))
					counter += 1;
				else
					counter = 0;

				if (counter == _strlen(needle))
				{
					return (haystack + i);
				}
			}
		}
	}
	return ('\0');
}
