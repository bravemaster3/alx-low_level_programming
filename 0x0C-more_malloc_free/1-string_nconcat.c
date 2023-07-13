#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string excluding the ending null byte
 * @s: the pointer to a string
 * Return: the length of the string that s points to
 */

unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * string_nconcat - concatenates 2 strings The returned pointer shall point
 * to a newly allocated space in memory, which contains s1, followed by the
 * first n bytes of s2, and null terminated.
 * If n is greater or equal to the length of s2 then use the entire string s2
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of bytes of s2 to copy. if n > len(s2), copy all s2
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i = 0, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n > _strlen(s2))
		n = _strlen(s2);

	concat = malloc((_strlen(s1) + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
