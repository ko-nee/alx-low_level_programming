#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The no. of cl arguments
 * @argv: An array of the cl arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[]) 
{
	int i;

	for (i = 0; i < argc; i++) 
	{
        printf("%s\n", argv[i]);
	}

	return (0);
}
