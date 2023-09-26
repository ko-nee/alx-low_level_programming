#include <stdio.h>
#include "lists.h"
void my_constructor(void) __attribute__((constructor));
/**
 * first - prints a sentence before main
 * my_constructor - Function executed before main.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
