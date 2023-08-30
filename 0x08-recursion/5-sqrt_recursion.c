#include "main.h"

int find_sqrt(int n, int x);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The input number.
 *
 * Return: natural square root of n, or -1 if n doesn't have
 */

int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - Recursive helper function to find the square root.
 * @n: The input number.
 * @x: The current guess(x) for the square root.
 *
 * Return: natural square root of n, or -1 if n doesn't have
 */

int find_sqrt(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, x + 1));
	}
}
