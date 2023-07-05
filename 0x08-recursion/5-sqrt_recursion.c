#include "main.h"

/**
 * _sqrt_recursion - calculates the natural root square of a number
 * @n: number whose natural root square to calculate
 * Return: natural root square, or -1 if natural root square doesn't exist
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_recursion_helper(n, 2));
}

/**
 * _sqrt_recursion_helper - a recursive helper function
 * @n: is the n for which we want a natural square root
 * @guess: an initial guess
 * Return: And integer, the square root or -1 if not found
 */
int _sqrt_recursion_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess + 1 > (n / 2))
		return (-1);
	return (_sqrt_recursion_helper(n, guess + 1));
}
