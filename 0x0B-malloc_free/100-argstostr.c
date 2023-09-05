#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: the number of arguments
 * @av: an array of strings (arguments)
 *
 * Return: On success, a pointer to the newly allocated concatenated string.
 *         On failure or if ac is 0 or av is NULL, returns NULL.
 */

char *argstostr(int ac, char **av)
{
	int i;
	int len;
	int total_len;
	char *concatenated;
	int concat_index;

	if (ac == 0 || av == NULL)
	return (NULL);

	total_len = 0;

	for (i = 0; i < ac; i++)
	{
	if (av[i] != NULL)
		{
		total_len += strlen(av[i]) + 1;
		}
	}
	concatenated = malloc(total_len + 1);

	if (concatenated == NULL)
	return (NULL);

	concat_index = 0;

	for (i = 0; i < ac; i++)
	{
	if (av[i] != NULL)
	{

	len = strlen(av[i]);
	strcpy(concatenated + concat_index, av[i]);

	concat_index += len;
	concatenated[concat_index++] = '\n';
	}
	}

	concatenated[concat_index] = '\0';
	return (concatenated);
}
