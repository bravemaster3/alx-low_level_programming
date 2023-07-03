#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates substring needle in haystack
 * @haystack: string where to find needle
 * @needle: string to locate in haystack
 * Return: the pointer to the located substring
 */

int _strlen(char *s);

char *_strstr(char *haystack, char *needle)
{
	int i, j, counter;
	char *s1 = '\0';

	printf("LENGTH of needle: %i\n", _strlen(needle));

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
				printf("Current letters:%c:%c\n", *(haystack + i), *(needle + j));
				if (*(haystack + i + j) == *(needle + j))
				{
					counter += 1;
					printf("current counter: %d\n", counter);
				}
				else
				{
					counter = 0;
					printf("Reinitializing counter\n");
				}

				if (counter == _strlen(needle))
				{
					printf("Before last increment\n");
					s1 = haystack + i;
					printf("last increment also worked\n");
					goto end;
				}
				else
					s1 = '\0';
			}
		}
		printf("current S1: %p\n", s1);
		printf("Current i is:%d\n", i);
	}
	goto end;
end:
	printf("We are at the end\n");
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
