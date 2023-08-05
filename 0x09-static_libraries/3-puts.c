#include "main.h"

/**
 * _puts - to print a string
 * @str: string to print
 * Return: not
 */
void _puts(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i++;
	}
}
