#include "main.h"

/**
 * _strlen - to return the lenght of a string
 * @s: the string to print the lenght
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
