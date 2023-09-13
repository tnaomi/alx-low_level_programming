#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees a dog pointer
* @d: pointer to struct to be freed
*/

void free_dog(dog_t *d)
{

	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}

}
