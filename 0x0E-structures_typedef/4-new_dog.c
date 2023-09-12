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
 * Return: Pointer to the newly created dog_t structure, or NULL if fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog_ptr;
    char *new_name, *new_owner;


    new_dog_ptr = malloc(sizeof(dog_t));
    if (new_dog_ptr == NULL)
        return (NULL);

    new_name = strdup(name);
    if (new_name == NULL)
    {
        free(new_dog_ptr);
        return (NULL);
    }

    new_owner = strdup(owner);
    if (new_owner == NULL)
    {
        free(new_name);
        free(new_dog_ptr);
        return (NULL);
    }

    new_dog_ptr->name = new_name;
    new_dog_ptr->age = age;
    new_dog_ptr->owner = new_owner;

    return (new_dog_ptr);
}
