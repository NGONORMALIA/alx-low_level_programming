#include "main.h"

/**
 * puts_half - to print the half of a string
 * @str: the string to print his half
 */
void puts_half(char *str)
{
	int j, k, i = 0;

	while (*(str + i) != '\0')
	{
		i++;
		j = i;
	}
	if ((j % 2) == 0)
	{
		for (k = (J / 2); k < j; k--)
			_putchar(str[k];
	}
	else
	{
		for (k = ((j - 1) / 2); k < j; k--)
			_putchar(str[k]);
	}
	_putchar('\n');
}
