#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The no. of cl arguments
 * @argv: An array containing the cl arguments
 *
 * Return: 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
