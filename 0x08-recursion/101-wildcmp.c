#include "main.h"

/**
 * pass_asterisk - fasts forward s2 when asterisk found, to move to next char
 * @s2: pointer to second string
 * Return: a pointer to s2 after *
 */
char *pass_asterisk(char *s2)
{
	if (*s2 == '*' && *s2 != '\0')
		return (pass_asterisk(s2 + 1));

	return (s2);
}

/**
 * wildcmp_asterisk - compares s1 characters when s2 when s2 has *
 * @s1: pointer to the first string
 * @s2: pointer to second string
 * Return: a pointer to the last s1 match?
 */
char *wildcmp_asterisk(char *s1, char *s2)
{
	if (*s1 != *s2 && *s1 != '\0')
		return (wildcmp_asterisk(s1 + 1, s2));

	return (s1);
}

/**
 * wildcmp - compares two strings..
 * @s1: pointer to the first string
 * @s2: pointer to second string
 * Return: an integer
 */

int wildcmp(char *s1, char *s2)
{
	int ret;

	ret = 0;
	if (*s1 != *s2 && *s2 != '*')
	{
		ret = 0;
		return (0);
	}

	if (*s2 == '*')
	{
		s2 = pass_asterisk(s2 + 1);
		s1 = wildcmp_asterisk(s1, s2);
	}

	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
	{
		ret = 1;
		return (1);
	}
	return (ret);
}
