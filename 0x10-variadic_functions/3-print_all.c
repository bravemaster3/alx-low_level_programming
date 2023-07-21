#include "variadic_functions.h"
/**
 * print_all - prints all given types and variadic arguments
 * @format: format specifier(s)
 */
void print_all(const char *const format, ...)
{
	unsigned int i = 0;
	char str_print[3] = "%", *str;
	va_list all;

	va_start(all, format);
	while (format != NULL && *(format + i) != '\0')
	{
		str_print[1] = *(format + i);
		switch (*(format + i))
		{
		case 'c':
			printf(str_print, va_arg(all, int));
			break;
		case 'i':
			printf(str_print, va_arg(all, int));
			break;
		case 'f':
			printf(str_print, va_arg(all, double));
			break;
		case 's':
			str = va_arg(all, char *);
			if (str == NULL)
				str = "(nil)";
			printf(str_print, str);
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(all);
	printf("\n");
}
