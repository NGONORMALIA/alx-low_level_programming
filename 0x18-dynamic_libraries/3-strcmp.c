#include "main.h"

/**
 * _strcmp - to compare two string
 * @s1: the first string to compare
 * @s2: the second string
 * Return: 0 if they are same, -1 s2 is great than s1 and 1 if not
 */
int _strcmp(char *s1, char *s2)
{
	int r = 0, i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			r = *(s1 + i) - *(s2 + i);
			break;
		}
	}
	return (r);
}
