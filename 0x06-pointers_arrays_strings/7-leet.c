#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into "1337" speak.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */

char *leet(char *str)
{
	char *ptr = str;
	char replacements[] = "AEOTLaeotl";
	char leet_chars[] = "4307143014";

	int i = 0; 

while (str[i] != '\0';)
	{
	while (int j = 0; replacements[j] != '\0'; j++)
	{
	if (str[i] == replacements[j])
	{
	str[i] = leet_chars[j];
	break;

	i++;
	}
	}
	}
	return (ptr);
}
