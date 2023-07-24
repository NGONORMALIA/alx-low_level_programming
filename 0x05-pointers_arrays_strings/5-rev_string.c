#include "main.h"

/**
 * rev_string - reverse sting that it will input
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int l, k, i = 0;

	while (*(s + i) != '\0')
	{
		_putchar(s[i]);
		i++;
		l = i;
	}
	_putchar('\n');
	for (k = (l - 1); k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
