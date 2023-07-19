#include "main.h"

/**
 * times_table - time table
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = j * i;
			_putchar(k + 48);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
