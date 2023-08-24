#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		return (*s1 - *s2);

	s1++;
	s2++;
	}
	return (*s1 - *s2);
}

int main(void)
{
	char str1[] = "apple";
	char str2[] = "banana";

	int result = _strcmp(str1, str2);

	if (result < 0)
		printf("str1 is less than str2\n");
	else if (result > 0)
		printf("str1 is greater than str2\n");
	else
		printf("str1 is equal to str2\n");

	return (0);
}
