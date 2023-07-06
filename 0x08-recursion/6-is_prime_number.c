#include "main.h"

/**
 * is_prime_number - checks if a number n is a primer number or not
 * @n: an integer
 * Return: an integer, 1 if prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_number_helper(n, 2));
}

/**
 * is_prime_number_helper - a recursive helper fun for dividing...
 * @n: an integer to check if it is prime
 * @m: another integer for testing divisibility
 * Return: 1 if division by another number worked, 0 otherwise
 */
int is_prime_number_helper(int n, int m)
{
	if (m == n)
	{
		return (1);
	}

	if (n % m == 0)
	{
		return (0);
	}

	return (is_prime_number_helper(n, m + 1));
}
