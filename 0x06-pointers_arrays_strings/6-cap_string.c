#include <stdbool.h>
#include <ctype.h>

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: true if c is a separator, false otherwise.
 */

bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";

	int i = 0;

	while (separators[i] != '\0')
	{
	if (c == separators[i])
	return (true);
	i++;
	}
	return (false);
}
