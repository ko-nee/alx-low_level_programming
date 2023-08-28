#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing acceptable characters.
 *
 * Return: The number of bytes in the initial segment of @s that consist
 *         only of bytes from @accept.
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int x = 0;
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])
		{
		x++;
		break;
		}
	else if (accept[i + 1] == '\0')
		return (x);
	}
	s++;
	}

	return (x);
}
