#include "main.h"

/**
 * leet - replaces certain characters by some numbers
 * @str: pointer to a string
 * Return: a pointer to the changing string
 */

char *leet(char *str)
{
	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";
	int i = 0, j;

	while (str[i] != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (str[i] == l[j])
				str[i] = n[j];
		}
		i++;
	}
	return (str);
}
