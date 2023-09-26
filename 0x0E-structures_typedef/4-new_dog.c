#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen - Calculate the length of a string.
 *
 * @s: The input string to evaluate
 * Return: The length of the string 's'.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')

	{
	i++;
	}
	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

 /**
 * new_dog - Creates a new dog structure
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner's name
 * Return: Pointer to the newly created dog_t structure, or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	int len1;

	len1 = _strlen(name);

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
	return (NULL);

	new_dog_ptr->name = malloc(sizeof(char) * (len1 + 1));
	if (new_dog_ptr->name == NULL)
	{
	free(new_dog_ptr);
	return (NULL);
	}

	strcpy(new_dog_ptr->name, name);
	new_dog_ptr->age = age;

	new_dog_ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_dog_ptr->owner == NULL)
	{
	free(new_dog_ptr->name);
	free(new_dog_ptr);
	return (NULL);
	}

	strcpy(new_dog_ptr->owner, owner);

	return (new_dog_ptr);
}
