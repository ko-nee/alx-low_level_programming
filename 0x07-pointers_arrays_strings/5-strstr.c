#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to be located.
 *
 * Return: 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
	return haystack;
	}

	while (*haystack)
	{
	char *h = haystack;
	char *n = needle;

	while (*n && *h == *n)
	{
	h++;
	n++;
	}

	if (*n == '\0')
	{
	return (haystack);
	}

	haystack++;
	}
	return (0);
}
