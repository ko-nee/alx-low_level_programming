#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Changes all lowercase letters to uppercase in a string
 * @str: The input string
 *
 * Return: A pointer to the modified string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
	if (*str >= 'a' && *str <= 'z')
	{
	*str = *str - ('a' - 'A');
	}
	str++;
	}

	return (ptr);
}
