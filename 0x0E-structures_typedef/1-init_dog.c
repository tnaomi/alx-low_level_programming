#include <stdio.h>
#include "dog.h"

/**
 * init_dog - init a new struct based
 * on existing struct, dog.
 * @d : pointer to struct
 * @name : dog name
 * @age : dog age
 * @owner : dog owner
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
