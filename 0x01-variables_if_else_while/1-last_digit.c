#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-entry point
 *
 *Description: This is the main function that prints the last digit of
 *the number stored in the variable n
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

int last_digit = n % 10;

printf("Last digit of %d is %d", n, last_digit);

if (last_digit > 5)
{
printf(" and is greater than 5\n");
}
else if (last_digit == 0)
{
printf(" and is 0\n");
}
else
{
printf(" and is less than 6 and not 0\n");
}
return (0);
}
