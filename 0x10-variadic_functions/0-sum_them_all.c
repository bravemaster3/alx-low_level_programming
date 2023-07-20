#include "variadic_functions.h"

/**
 * sum_them_all - variadic function for summing up several integers
 * @n: last signed argument, number of arguments
 * Return: the sum as an integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
