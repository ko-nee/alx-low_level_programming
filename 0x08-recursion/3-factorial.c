#include "main.h"

/**
 * factorial - Returns the factorial of a number.
 * @n: The input number.
 *
 * Return: The factorial of n, or -1 if n is negative.
 */

int factorial(int n)
{
	if (n < 0) /* Check for the error case */
	{
	return (-1);
	}
	else if (n == 0) /* Base case: factorial of 0 is 1 */
	{
	return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
