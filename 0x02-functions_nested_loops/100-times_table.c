#include "main.h"

/**
 * print_times_table - to print the alphabet
 * Return: times tables
 * @n: input valueof the time table
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				k = i * j;
				_putchar(',');
				_putchar(' ');
				if (k <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(k + 48);
				}
				else if (k <= 99)
				{
					_putchar(' ');
					_putchar((k / 10) + 48);
					_putchar((k % 10) + 48);
				}
				else
				{
					_putchar((k / 100) + 48);
					_putchar(((k / 10) % 10) + 48);
					_putchar((k % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
