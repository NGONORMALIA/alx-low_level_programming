#include "main.h"

/**
 * _isdigit - to check if the character is a digit
 * @c: input character
 * Return: 1 if the characteris a digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
