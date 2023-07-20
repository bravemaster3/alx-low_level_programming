#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers passed
 * @separator: pointer to the separator to use to separate numbers
 * @n: number of integers to be passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (i != n - 1)
			(printf("%s", separator));
	}
	printf("\n");
	va_end(ap);
}
