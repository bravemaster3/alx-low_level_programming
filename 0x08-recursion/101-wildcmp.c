#include "main.h"

char *pass_asterisk(char *s2)
{
	if (*s2 == '*' && *s2 != '\0')
		return (pass_asterisk(s2 + 1));

	return (s2);
}

char *wildcmp_asterisk(char *s1, char *s2)
{
	if (*s1 != *s2 && *s1 != '\0')
		/*Try something here, a condition for incrementing S1 to the end even when there is a match, to see if we find also the same characters....*/
		return (wildcmp_asterisk(s1 + 1, s2));

	return (s1);
}

/**
 * wildcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to second string
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
