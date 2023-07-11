#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a function using recursion
 * @s: pointer to the string
 * Return: the length of the string as integer
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	len = 1 + _strlen_recursion(s + 1);
	return (len);
}

/**
 * argstostr - function for concatenating arguments
 * @ac: number of arguments
 * @av: pointer to pointers of arguments
 * Return: pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	int len = 0, len_i = 0, i, j;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len = len + _strlen_recursion(av[i]);
	}

	len = len + ac + 1;

	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[len_i + j] = av[i][j];
			j++;
		}
		len_i += j;
		str[len_i] = '\n';
		len_i += 1;
	}
	return (str);
}
