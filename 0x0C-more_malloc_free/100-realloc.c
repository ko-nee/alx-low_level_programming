#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the memory block previously allocated with malloc.
 * @old_size: Size in bytes of the allocated space for ptr.
 * @new_size: New size in bytes of the memory block.
 *
 * Return: A pointer to the newly allocated memory block or NULL on failure.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}

	if (ptr == NULL)
	return (malloc(new_size));


	if (new_size == old_size)
	return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	return (NULL);

	if (new_size > old_size)
	{
	memcpy(new_ptr, ptr, old_size);
	}
	else
	{
	memcpy(new_ptr, ptr, new_size);
	}

	free(ptr);

	return (new_ptr);
}
