#include "main.h"

int confirm_prime(int n, int x);

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The input number.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (confirm_prime(n, 2));
}

/**
 * confirm_prime - Recursive helper function to confirm if a number is prime.
 * @n: The input number.
 * @x: The current divisor to check.
 * Return: 1 if n is prime, 0 otherwise.
 */

int confirm_prime(int n, int x)
{
	if (n <= 1)
	{
	return (0);
	}
	else if (x >= n)
	{
	return (1);
	}
	else if (n % x == 0)
	{
	return (0);
	}
	else
	{
	return (confirm_prime(n, x + 1));
	}
}
