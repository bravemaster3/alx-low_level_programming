#include "main.h"

/**
 * cap_string - capitalizes each word depending on
 * preceding string.
 * @str: a pointer to a string
 * Return: a pointer to the final string
 */

char *cap_string(char *str)
{
	int i = 1;

	while (str[i] != '\0')
	{
		if (str[i - 1] == ' ' || str[i - 1] == '\t' ||
			str[i - 1] == '\n' || str[i - 1] == ',' ||
			str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' ||
			str[i - 1] == '\"' || str[i - 1] == '(' ||
			str[i - 1] == ')' || str[i - 1] == '{' ||
			str[i - 1] == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - ('a' - 'A');
	return (str);
}
