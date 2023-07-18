#include "main"
/**
 * _abs - to calculate the absolute value
 * @n: value checker
 * Return: the absolute value
 */
int _abs(int n);
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
