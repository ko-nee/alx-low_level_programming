#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initilizes variable of type struct dog
 * @d: initialize pointer to struct dog
 * @name: a pointer to a char to store the dog's name.
 * @age : is a float to store the dog's age
 * @owner: is a pointer to a char to store the owner's name.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
        if (d == NULL)
                d = malloc(sizeof(struct dog));

        d -> name = name;
        d -> age = age;
        d -> owner = owner;
}
