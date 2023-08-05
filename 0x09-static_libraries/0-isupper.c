#include "main.h"

/**
 * _isupper - to check if the character is upper or not
 * @c: the input character
 * Return: 1 if the character is uppercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
