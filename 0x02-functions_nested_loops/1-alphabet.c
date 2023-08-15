#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the alphabet in lowercase
 *
 * Return: on success, 1.
 * On errot, -1 is returned, and errno is set appropriately
 */
int _putchar(char c) {
    return write(1, &c, 1);
}

void print_alphabet(void) {
    char letter = 'a';

    while (letter <= 'z') {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}
