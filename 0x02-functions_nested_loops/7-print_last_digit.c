#include "main.h"
/**
 * print_last_digit - to print th last digit
 * @n: value checker
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int i;

	i  = n % 10
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
	_putchar('\n');
}
