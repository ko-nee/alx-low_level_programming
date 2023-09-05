#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: On success, a pointer to the newly allocated duplicated string.
 *         On failure or if str is NULL, returns NULL.
 */

char *_strdup(char *str)
{
	char *dup_str;
	size_t len, i = 0;

	if (str == NULL)
	{
	return (NULL);
	}


	len = strlen(str);

	dup_str = malloc((len + 1) * sizeof(char));

	if (dup_str == NULL)
	{
	return (NULL);
	}
	
	for (i = 0; i <= len; i++)
	{
        dup_str[i] = str[i];
	}

	return (dup_str);
}
