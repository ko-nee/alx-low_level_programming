#include <stdlib.h>
#include <time.h>
#include <stdio> 

/**
 * main - entry point 
 * Description - print whether the number stored 
 * in the variable n is positive or negative 
 *
 * Result =  0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int lastDigit = n % 10

printf("The last digit of %d is %d ", n, lastDigit);
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
