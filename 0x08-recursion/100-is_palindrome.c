#include "main.h"

int confirm_palindrome(char *s, int a, int z);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (confirm_palindrome(s, 0, length - 1));
}

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The input string.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	else
	{
	return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * confirm_palindrome - function to confirm string's palindrome.
 * @s: The input string.
 * @a: The starting index for comparison.
 * @z: The ending index for comparison.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */

int confirm_palindrome(char *s, int a, int z)
{
	if (a >= z)
	{
	return (1);
	}
	else if (s[a] != s[z])
	{
	return (0);
	}
	else
	{
	return (confirm_palindrome(s, a + 1, z - 1));
	}
}
