#include "main.h"

/**
 * print_line - to print line
 * @n: input integer to determinate the size of the line
 * Return: not
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
