#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to the string
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = strlen_recursive(s);

	if (len == 0)
		return (1);

	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * strlen_recursive - returns the length of a string using recursion
 * @s: pointer to a string
 * Return: an integer, the length of the string
 */

int strlen_recursive(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + strlen_recursive(s + 1));
}

/**
 * is_palindrome_helper - helper for the palindrome checker
 * @s: pointer to a string
 * @start: starting index
 * @end: ending index
 * Return: returns 1 if palindrome, 0 if not
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start == end)
		return (1);

	if (s[start] != s[end])
		return (0);

	if (start <= end)
		return (is_palindrome_helper(s, start + 1, end - 1));

	return (1);
}
