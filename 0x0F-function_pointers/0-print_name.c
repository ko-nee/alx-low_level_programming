#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_name - Function that prints a name using a callback function.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints the name.
 *
 * Return: 0 (success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);

}
