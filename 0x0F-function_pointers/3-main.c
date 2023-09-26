#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func)(int, int);

    	if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    int num1 = atoi(argv[1]);
    char *operator = argv[2];
    int num2 = atoi(argv[3]);

    int (*func)(int, int) = get_op_func(operator);

    if (func == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    printf("%d\n", func(num1, num2));

    return (0);
}
