#include "main.h"

/**
 * _strcmp - compares two strings,
 * @s1: pointer to first string
 * @s2: pointer to the second string
 * Return: 0 if the strings are the same,
 * the difference between the first different digits
 * if the 2 strings are different
 */

int _strcmp(char *s1, char *s2)
{
	int stp = 0;
	char *s1_c = s1;
	char *s2_c = s2;
	int ret = 0;

	while (*s1_c != '\0' && *s2_c != '\0' && stp == 0)
	{
		ret = (*s1_c) - (*s2_c);
		if (*s1_c != *s2_c)
			stp = 1;
		s1_c++;
		s2_c++;
	}
	return (ret);
}
