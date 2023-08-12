#include <stdio>

/**
 *main-entry point
 *Description: This function prints the alphabet in lowercase,
 *and then in upper case
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 52; i++)
{
putchar(alp[i]);
}
putchar("\n");
return (0);
}
