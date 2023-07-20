#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	if (separator == NULL)
		separator = "";

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(strings);

	printf("\n");
}
