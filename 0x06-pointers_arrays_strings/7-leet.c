#includes "main.h"
#includes <stdio.h>

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

for (int i = 0; str[i] != '\0'; i++)
	{
	for (int j = 0; replacements[j] != '\0'; j++)
	{
	if (str[i] == replacements[j])
	{
	str[i] = leet_chars[j];
	break;
	}
	}
	}
	return (ptr);
}
