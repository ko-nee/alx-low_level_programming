#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int sign = 1;

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
	s[i] == '+' || s[i] == '-')
	{
	if (s[i] == '-')
	{
	sign = -sign;
	}
	i++;

	}
	while (s[i] >= '0' && s[i] <= '9')
	{

	if (n > (INT_MAX - (s[i] - '0')) / 10)
	{
	return ((sign == 1) ? INT_MAX : INT_MIN);
	}

	n = n * 10 + (s[i] - '0');
	i++;
	}

	return (n * sign);
}

