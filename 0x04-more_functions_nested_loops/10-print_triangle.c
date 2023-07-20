#include "main.h"

/**
 * print_triangle - to print a triangle
 * @size: the size of this triangle
 */
void print_triangle(int size)
{
	int i, k, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			if (i != size)
			{
				for (j = 0; j < size - i; j++)
				{
					_putchar(' ');
				}
				for (k = 0; k < i; k++)
				{
					_putchar('#');
				}
			}
			else
			{
				for (j = 0; j < size; j++)
					_putchar('#');
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
