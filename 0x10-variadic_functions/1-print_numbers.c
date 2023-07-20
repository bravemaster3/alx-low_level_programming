#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers passed
 * @separator: pointer to the separator to use to separate numbers
 * @n: number of integers to be passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	if (separator == NULL)
		separator = "";

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, unsigned int));
		if (i == n - 1)
			printf("\n");
		else
			(printf("%s", separator));
	}
	va_end(nums);
}
