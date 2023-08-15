#include <stdio.h>
#include "dog.h"

/**
 * init_dog - the entry point to initialise his variables
 * @name: the first element
 * @age: the second element
 * @owner: the third element
 * @d: the struct name
 * Return: nothing
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
