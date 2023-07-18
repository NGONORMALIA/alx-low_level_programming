#include "main.h"
/**
 * print_last_digit - to print th last digit
 * @n: value checker
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int i;

	l  = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
	_putchar('\n');
}
