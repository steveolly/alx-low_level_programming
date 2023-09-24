#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owne
 * @new_dog: ..
 */
typedef int dog_t
typedef struct dog
{
	dog_t *new_dog;
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
