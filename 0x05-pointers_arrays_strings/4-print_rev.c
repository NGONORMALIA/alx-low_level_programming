#include "main.h"

/**
 * print_rev - to print string in reverse
 * @s: strint to print his reverse
 * Return: not
 */
void print_rev(char *s)
{
	int i = 0, l, k;

	while (*(s + i) != '\0')
	{
		i++;
		l = i;
	}
	for (k = (l - 1); k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
