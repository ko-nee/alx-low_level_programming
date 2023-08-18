#include "main.h"

/**
 * print_line - Draws a straight line of underscores
 * @n: Number of times the character _ should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
		_putchar('\n');
	}
}

