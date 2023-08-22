#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an integer array followed by a new line.
 * @a: The array of integers.
 * @n: The number of elements to print.
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
	printf("%d", a[i]);

	if (i != n - 1)
	printf(", ");
	}

	printf("\n");
}
