#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner's name
 *
 * Return: Pointer to the newly created dog_t structure, or NULL 
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

