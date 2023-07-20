#include "main.h"

/**
 * print_diagonal - to print some symbol
 * @n: input integer to determine the size od diagonal
 * Return: Not
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != 0)
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
				_putchar('\\');
			}
			else
			{
				_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
