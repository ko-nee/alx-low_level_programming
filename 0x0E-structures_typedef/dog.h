#ifndef DOG_H
#define DOG_H

/**
 * init_dog - initilizes variable of type struct dog
 * @d: initialize pointer to struct dog
 * @name: a pointer to a char to store the dog's name.
 * @age : is a float to store the dog's age
 * @owner: is a pointer to a char to store the owner's name.
 */


struct dog 
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);



#endif
