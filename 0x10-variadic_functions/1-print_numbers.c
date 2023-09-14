#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers separated followed by new line.
 * @separator: The string to be printed between numbers (if not NULL).
 * @n: The number of integers to be printed.
 * @...: The integers to be printed.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
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
	int num = va_arg(args, int);

	printf("%d", num);

	if (index < n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	va_end(args);

	printf("\n");
}
