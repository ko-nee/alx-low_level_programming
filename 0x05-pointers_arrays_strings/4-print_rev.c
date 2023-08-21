#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _strlen - Calculate the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;

    return len;
}

/**
 * _puts - Print a string followed by a new line to stdout.
 * @str: The input string.
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }

    _putchar('\n'); // Print a new line after the string
}

/**
 * print_rev - Print a string in reverse followed by a new line.
 * @s: The input string.
 */
void print_rev(char *s)
{
    int len = _strlen(s);

    for (int i = len - 1; i >= 0; i--)
        _putchar(s[i]);

    _putchar('\n'); // Print a new line after the reversed string
}

int main(void)
{
    char *message = "Hello, world!";
    
    _puts("Original message:");
    _puts(message);
    
    _puts("Reversed message:");
    print_rev(message);

    return 0;
}
