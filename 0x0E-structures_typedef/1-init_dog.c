#include "dog.h"

/**
 * init_dog - function name
 * @d: struct pointer
 * @name: ...
 * @age: ...
 * @owner: ..
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
