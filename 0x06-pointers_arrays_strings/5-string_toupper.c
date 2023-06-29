#include "main.h"

/**
 * string_toupper - string to uppercase
 * @str: pointer to the string to turn into uppercase
 * Return: a pointer to the uppercase string
 */

char *string_toupper(char *str)
{
	int i = 0;
	char *str_cpy = str;

	while (str_cpy[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
