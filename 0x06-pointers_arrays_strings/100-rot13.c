#include "main.h"

/**
 * rot13 - encodes in rot13
 * @str: pointer to a string
 * Return: a pointer to the encoded string
 */

char *rot13(char *str)
{
	char src[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char dest[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0, j;

	while (str[i] != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (str[i] == src[j])
			{
				str[i] = dest[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
