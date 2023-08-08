#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - to create an array of char
 * @size: the size of array to create
 * @c: the initializer
 * Return: the function return an array of char
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	t = malloc(sizeof(char) * size);
	if (t == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(t + i) = c;
	}
	return (t);
}
