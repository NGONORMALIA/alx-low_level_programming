#include "main.h"

/**
 * _islower - to check if some letter are lower or not
 * @c: input character that the function should check
 * Return: 1 if the letter is lower and 0 if not
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
