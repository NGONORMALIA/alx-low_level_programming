#include "main.h"
/**
 * print_last_digit - to print th last digit
 * @n: value checker
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n > 0 || n == 0)
	{
		_putchar(n % 10 + '0');
		return (n % 10);
	}
	else
	{
		c = c * -1;
		_putchar(n % 10 + '0');
		return (n % 10);
	}
	_putchar('\n');
}
