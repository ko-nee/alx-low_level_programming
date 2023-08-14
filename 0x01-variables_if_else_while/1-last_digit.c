#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point 
 * Description - print whether the number stored
 * in the variable n is positive or negative
 *
 * Result =  0 (Success)
 */
int main(void)
{

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("The last digit of %d is %d ", n);
if (lastDigit > 5)
{
printf("and is greater than 5\n");
}
else if (lastDigit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
