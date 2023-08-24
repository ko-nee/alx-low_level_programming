#include <stdio.h>

/**
 * _strcmp - Compares two strings
 * @str1: first string
 * @str2: second tring
 *
 * Return: An integer less than, equal to or greater than zero
 */

int main(void)
{
	char str1[] = "apples";
	char str2[] = "oranges";

	int result = _strcmp(str1, str2);

	if (result < 0)
		printf("str1 is less than str2\n");
	else if (result > 0)
		printf("str1 is greater than str2\n");
	else
		printf("str1 is equal to str2\n");

	return (0);
}

