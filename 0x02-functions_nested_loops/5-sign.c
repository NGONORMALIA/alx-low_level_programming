#include "main.h"

/**
 * print_sign - to check the sign
 * @n: input checking
 * Return: 1 if positive -1 if not and 0 if it's 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		 _putchar(' ');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	else
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	_putchar('\n');
}
