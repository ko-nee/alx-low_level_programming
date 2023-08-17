#include "main.h"
#include <stdio.h>

/**
 * main: checks the code
 * @c: checks uppercase character
 *
 * Return: (1) or (0)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
