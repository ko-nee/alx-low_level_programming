#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size (in bytes) of the memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         Exits with status 98 if malloc fails.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
	fprintf(stderr, "Memory allocation failed. Exiting with status 98.\n");
	exit(98);
	}

	return (ptr);
}
