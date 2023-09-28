#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: string with the binary number (0s and 1s).
 *
 * Return: The converted number, or 0 if there is an error.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0;

	if (b == NULL)
		return (0);

	for (; *b; b++)
	{
	while (*b != '0' && *b != '1')
		return (0);

	conv_num = (conv_num << 1) | (*b - '0');
	}

	return (conv_num);
}
