#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The input number.
 * Return: The natural square root of n, or -1 if n doesn't have a natural square root.
 */
int _sqrt_recursion(int n)
{
    return find_sqrt(n, 1); /* Helper function to find the square root */
}

/**
 * find_sqrt - Recursive helper function to find the square root.
 * @n: The input number.
 * @guess: The current guess for the square root.
 * Return: The natural square root of n, or -1 if n doesn't have a natural square root.
 */
int find_sqrt(int n, int guess)
{
    if (guess * guess == n) /* Base case: found the square root */
    {
        return guess;
    }
    else if (guess * guess > n) /* The number doesn't have a natural square root */
    {
        return -1;
    }
    else
    {
        return find_sqrt(n, guess + 1); /* Recursive search for the square root */
    }
}

