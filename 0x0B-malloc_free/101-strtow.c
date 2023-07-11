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
 * strtow - splits string into array of words
 * @str: pointer to the string
 * Return: the pointer to the array of words
 */

char **strtow(char *str)
{
	char **spl;
	int *starts, *ends;
	int i = 0, j, k, len = _strlen_recursion(str), nwords = 0, isword = 2;
	int index_s = 0, index_e = 0, len_word_i = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	starts = malloc(sizeof(int) * len);
	ends = malloc(sizeof(int) * len);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			if ((i > 0 && str[i - 1] == ' ') || (i == 0 && str[i] != ' '))
			{
				starts[index_s] = i;
				index_s += 1;
			}
			isword = 1;
			i++;
		}
		if (str[i] == ' ')
		{
			if (i > 0 && str[i - 1] != ' ')
			{
				ends[index_e] = i - 1;
				index_e += 1;
			}
			if (isword == 1)
				nwords += 1;
			isword = 0;
			i++;
		}
	}
	if (str[len - 1] != ' ')
	{
		ends[index_e] = len - 1;
		nwords += 1;
	}
	spl = malloc(sizeof(char *) * (nwords + 1));
	if (spl == NULL)
		free(spl);
	for (i = 0; i < nwords; i++)
	{
		len_word_i = ends[i] - starts[i] + 1;
		spl[i] = malloc(sizeof(char) * (len_word_i + 1));
		if (spl[i] == NULL)
			return (NULL);
		for (j = starts[i], k = 0; j <= ends[i]; j++, k++)
		{
			spl[i][k] = str[j];
		}
		spl[i][k] = '\0';
	}
	free(starts);
	free(ends);
	return (spl);
}
