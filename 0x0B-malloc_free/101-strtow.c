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
 * wordcount - counts the number of words sep by space in a string
 * @str: pointer to the string
 * Return: wordcount as integer
 */

int wordcount(char *str)
{
	int i = 0, isword = 2, nwords = 0;
	int len = _strlen_recursion(str);

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			isword = 1;
		}
		if (str[i] == ' ')
		{
			if (isword == 1)
				nwords += 1;
			isword = 0;
		}
		i++;
	}
	if (str[len - 1] != ' ')
		nwords += 1;
	return (nwords);
}

/**
 * wordstartend - identifies start and end of words
 * @str: pointer to string
 * Return: the pointer to a 2D array with row0 start and row1 end
 */

int **wordstartend(char *str)
{
	int i = 0, nwords = 0, index_s = 0, index_e = 0;
	int len = _strlen_recursion(str);
	int **st_en;

	nwords = wordcount(str);
	st_en = malloc(sizeof(int *) * 2);
	if (st_en == NULL)
		return (NULL);
	st_en[0] = malloc(sizeof(int) * nwords);
	if (st_en[0] == NULL)
		return (NULL);
	st_en[1] = malloc(sizeof(int) * nwords);
	if (st_en[1] == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && ((i > 0 && str[i - 1] == ' ') || (i == 0)))
		{
			st_en[0][index_s] = i;
			index_s += 1;
		}

		if (str[i] == ' ' && i > 0 && str[i - 1] != ' ')
		{
			st_en[1][index_e] = i - 1;
			index_e += 1;
		}
		i++;
	}
	if (str[len - 1] != ' ')
		st_en[1][index_e] = len - 1;
	return (st_en);
}
/**
 * strtow - splits string into array of words
 * @str: pointer to the string
 * Return: the pointer to the array of words
 */

char **strtow(char *str)
{
	char **spl;
	int **st_en;
	int i = 0, j = 0, k = 0, nwords = 0, len_word_i = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	nwords = wordcount(str);
	if (nwords == 0)
		return (NULL);
	st_en = wordstartend(str);
	spl = malloc(sizeof(char *) * (nwords + 1));
	if (spl == NULL)
		free(spl);
	for (i = 0; i < nwords; i++)
	{
		len_word_i = st_en[1][i] - st_en[0][i];
		spl[i] = malloc(sizeof(char) * (len_word_i + 1));
		if (spl[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(spl[j]);
			free(spl);
			free(st_en[0]);
			free(st_en[1]);
			free(st_en);
			return (NULL);
		}
		for (j = st_en[0][i], k = 0; j <= st_en[1][i]; j++, k++)
		{
			spl[i][k] = str[j];
		}
		spl[i][k] = '\0';
	}
	spl[nwords] = NULL;
	free(st_en[0]);
	free(st_en[1]);
	free(st_en);
	return (spl);
}
