#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - the entry point
 * @d: the name the struct to free
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
