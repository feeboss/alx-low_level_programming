#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - modify a change of type struct dog
 * @d: pointer to struct dog to modify
 * @name: name to modify
 * @age: age to modify
 * @owner: owner to modify
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

