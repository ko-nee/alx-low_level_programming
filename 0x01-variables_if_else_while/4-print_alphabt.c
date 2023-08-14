#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase,
 * followed by a new line. It includes all letters
 *  except 'q' and 'e'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}

