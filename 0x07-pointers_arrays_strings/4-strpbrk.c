#include "main.h"

/**
 * _strpbrk - locates the occurence of a char of string
 *  accept in string s
 * @s: pointer to string where to find the char
 * @accept: pointer to string containing chars to find
 * Return: the pointer to the first occurence of char in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *s1 = '\0';

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				s1 = s + i;
				goto end;
			}
		}
	}
	goto end;

end:
	return (s1);
}
