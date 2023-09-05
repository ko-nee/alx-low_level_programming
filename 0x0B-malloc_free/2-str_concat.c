#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: On success, a pointer to the newly allocated concatenated string.
 *         On failure, returns NULL.
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int len_s1;
	int len_s2;
	char *concat_str;

	if (s1 == NULL)
	{
	s1 = "";
	}

	if (s2 == NULL)
	{
	s2 = "";
	}

	len_s1 = 0, len_s2 = 0;
	while (s1[len_s1] != '\0')
	{
	len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
	len_s2++;
	}

	concat_str = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (concat_str == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
	concat_str[i] = s1[i];
	}

	for (i = 0; i < len_s2; i++)
	{
	concat_str[len_s1 + i] = s2[i];
	}

	concat_str[len_s1 + len_s2] = '\0';

	return (concat_str);
}
