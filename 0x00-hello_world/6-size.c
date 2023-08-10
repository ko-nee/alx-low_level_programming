#include <stdio.h>
/**
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{

	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("The size of char is %lu.\n",(unsigned long)sizeof(a));
	printf("The size of int is %lu.\n",(unsigned long)sizeof(b));
	printf("The size of long int is %lu.\n",(unsigned long)sizeof(c));
	printf("The size of long long int is %lu.\n",(unsigned long)sizeof(d));
	printf("The size of float is %lu.\n",(unsigned long)sizeof(e));

	return(0);
}
