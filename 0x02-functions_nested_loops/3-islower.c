#include "main.h"

/**
 * _islower - to check if some letter are lower or not
 * @c: input character that the function should check
 * Return: 1 if the letter is lower and 0 if not
 */
int _islower(int c)
{
	if (c < 97 && c > 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar('\n');
}
