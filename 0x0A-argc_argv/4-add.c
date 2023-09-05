#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * Main: program calculates sum of no.s as cl arguments.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc < 3)
	{
	printf("Usage: %s num1 num2 [num3 ...]\n", argv[0]);
	return (1);
	}

	for (i = 1; i < argc; i++)

	{
	int num;

	num = atoi(argv[i]);
	sum += num;
	}

	printf("Sum: %d\n", sum);

	return (0);
}
