#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings separated & followed by a new line.
 * @separator: The string to be printed between strings (if not NULL).
 * @n: The number of strings to be printed.
 * @...: The strings to be printed.
 *
 *
 * If a string is NULL, it prints (nil) instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
	{
	separator = "";
	}

	for (index = 0; index < n; index++)
	{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", str);
	}

	if (index < n - 1)
	{
	printf("%s", separator);
	}
	}

	va_end(args);

	printf("\n");
}
