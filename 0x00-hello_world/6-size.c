#include <stdio.h>
/**
 * Main - program printing sizes of various types
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	printf("Size of a char; %lu byte(s)\n", sizeof(char));
	printf("Size of an int; %lu byte(s)\n", sizeof(int));
	printf("Size of a long int; %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int; %lu byte(s)\n", sizeof(long long int));
	printf("size of a float; %lu byte(s)\n", sizeof(float));
	return (0);
}
