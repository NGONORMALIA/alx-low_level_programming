#include "main.h"

/**
 * print_square - entry point to print square
 * @size: the size of square
 * Return: not
 */
void print_square(int size)
{
	int j, i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
