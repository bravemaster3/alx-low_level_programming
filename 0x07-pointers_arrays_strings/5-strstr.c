#include "main.h"

/**
 * _strstr - locates substring needle in haystack
 * @haystack: string where to find needle
 * @needle: string to locate in haystack
 * Return: the pointer to the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, counter;
	char *s1 = '\0';

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *needle)
		{
			counter = 0;
			for (j = 0; *(needle + j) != '\0' &&
						*(needle + j) == *(haystack + i + j) &&
						*(haystack + i + j) != '\0';
				 j++)
			{
				if (*(haystack + i + j) == *(needle + j))
				{
					counter += 1;
				}
				else
				{
					counter = 0;
				}

				if (counter == _strlen(needle))
				{
					s1 = haystack + i;
					goto end;
				}
				else
					s1 = '\0';
			}
		}
	}
	goto end;
end:
	return (s1);
}

/**
 * _strlen - returns the length of a string
 * @s: the pointer to a string
 * Return: the length of the string that s points to
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
