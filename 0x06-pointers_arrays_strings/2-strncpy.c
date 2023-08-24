#include "main.h"

/**
 * _strncpy - Copies a string using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: The maximum number of bytes to copy
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
	dest[i] = src[i];
	i++;
	}

	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}

	return (dest);
}

