#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Checks if a string is a positive number.
 * @str: The string to check.
 *
 * Return: 1 if str is a positive number, 0 otherwise.
 */

int is_positive_number(char *str)
{
	if (*str == '\0')
	return (0);

	while (*str)
	{
	if (!isdigit(*str))
	return (0);
	str++;
	}

	return (1);
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result of the multiplication.
 */

long multiply(long num1, long num2)
{
	return (num1 * num2);
}

int main(int argc, char *argv[])
{
	char *num1_str;
	char *num2_str;
	long num1;
	long num2;
	long result;

	if (argc != 3)
	{
	printf("Error\n");
	return (98);
	}

	num1_str = argv[1];
	num2_str = argv[2];

	if (!is_positive_number(num1_str) || !is_positive_number(num2_str))
	{
	printf("Error\n");
	return (98);
	}

	num1 = atol(num1_str);
	num2 = atol(num2_str);

	result = multiply(num1, num2);

	printf("%ld\n", result);

	return (0);
}
