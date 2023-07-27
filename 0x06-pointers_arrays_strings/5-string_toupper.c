#include "main.h"

/**
 * string_toupper - to change all lowercase letter to uppercase
 * @s: the string to transform
 * Return: Always the string s already transform
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
