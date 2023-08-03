#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: pointer to a string ideally of 0 and 1
 * Return: the unsigned integer of 0 if b is NULL or has non 0/1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len, i;

	if (b == NULL || strlen(b) == 0)
		return (0);
	len = strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = result + (b[i] - '0') * power(2, len - i - 1);
	}
	return (result);
}

/**
 * power - calculates base to the power of exp
 * @base: what to raise to a power
 * @exp: the exponent
 * Return: the result of the power
 */
unsigned int power(unsigned int base, int exp)
{
	unsigned int result = 1;
	int i;

	if (exp >= 0)
	{
		for (i = 0; i < exp; i++)
			result *= base;
	}
	else
	{
		for (i = 0; i > exp; i--)
			result /= base;
	}

	return (result);
}
