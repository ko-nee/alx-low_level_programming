#include <unistd.h>
#include "main.h"

/**
 * swap_int - Swap the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *)
 */
void swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;
}
