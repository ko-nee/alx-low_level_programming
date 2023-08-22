#include <stdio.h>
#include "main.h"

/**
 *print_array - a function that prints elements of an array of integers 
 *
 *Return: 0
 */

int main(void)
{
	int numbers[] = {1, 2, 3, 4, 5};
	int num_elements = sizeof(numbers) / sizeof(numbers[0]);

	printf("Array elements: ");
	print_array(numbers, num_elements);

	return (0);
}
