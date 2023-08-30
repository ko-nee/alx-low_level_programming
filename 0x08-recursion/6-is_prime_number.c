#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The input number.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
    return check_prime(n, 2); /* Helper function to check if n is prime */
}

/**
 * check_prime - Recursive helper function to check if a number is prime.
 * @n: The input number.
 * @divisor: The current divisor to check.
 * Return: 1 if n is prime, 0 otherwise.
 */
int check_prime(int n, int divisor)
{
    if (n <= 1) /* Base case: n is not prime */
    {
        return 0;
    }
    else if (divisor >= n) /* Base case: checked all divisors */
    {
        return 1;
    }
    else if (n % divisor == 0) /* n is divisible by divisor, not prime */
    {
        return 0;
    }
    else
    {
        return check_prime(n, divisor + 1); /* Recursive search for divisors */
    }
}

