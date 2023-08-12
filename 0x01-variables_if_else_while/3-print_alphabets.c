#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase,
 * followed by the alphabet in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';
int i;

for (i = 0; i < 26; i++)
{
putchar(lowercase);
lowercase++;
}
for (i = 0; i < 26; i++)
{
putchar(uppercase);
uppercase++;
}
putchar('\n');
return (0);
}
