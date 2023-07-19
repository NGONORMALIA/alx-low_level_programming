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
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			k = j * i;
			_putchar(',');
			_putchar(' ');
			if (k <= 9)
			{
				_putchar(' ');
				_putchar(k + 48);
			}
			else
			{
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
