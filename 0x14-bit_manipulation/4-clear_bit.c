#include "main.h"

/**
 * clear_bit - Clears the value of a bit at a given index to 0.
 * @n: Pointer to the unsigned long integer.
 * @index: The index of the bit to clear (0-based).
 *
 * Return: 1 if it worked, or -1 if an error occurs.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1 << index;
	*n &= ~mask;

	return (1);
}
