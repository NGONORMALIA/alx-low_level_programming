#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - to duplicate a string
 * @str: the string to duplicate
 * Return: the duplicated string
 */
char *_strdup(char *str)
{
	char *st;
	int i = 0, j;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	st = malloc(sizeof(char) * (i + 1));
	if (st == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		st[j] = str[j];
	return (st);
}
