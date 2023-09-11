#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: prints the name of the file it was compiled from
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Compiled from file: %s\n", __FILE__);
	return (0);
}
