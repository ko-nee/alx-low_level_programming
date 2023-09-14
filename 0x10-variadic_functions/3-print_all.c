#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints values based on the format string.
 * @format: A format string indicating the types of arguments.
 * @...: The arguments to be printed.
 *
 * Description: This function prints values based on the format string.
 * - 'c' for char
 * - 'i' for integer
 * - 's' for string (prints (nil) if the string is NULL)
 * Other characters are ignored.
 */

void print_all(const char * const format, ...)
{
	char *separator = "";
	int i = 0;
	char c;
	char *s;

	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
	c = format[i];
	switch (c)
	{
	case 'c':
		printf("%s%c", separator, va_arg(args, int));
		break;
	case 'i':
		printf("%s%d", separator, va_arg(args, int));
		break;
	case 'f':
		printf("%s%f", separator, va_arg(args, double));
		break;
	case 's':
		s = va_arg(args, char *);
		if (s == NULL)
		{
			printf("%s(nil)", separator);
		} else {
			printf("%s%s", separator, s);
		} break;
	default:
		break;
	}
	separator = ", ";
	i++;
	}

	va_end(args);

	printf("\n");
}
