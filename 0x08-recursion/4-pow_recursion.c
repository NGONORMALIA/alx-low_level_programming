#include "main.h"

/**
 * _pow_recursion - to return the value of x raised to power of y
 * @x: the integer raised
 * @y: the integer to raise
 * Return: the value of the function
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
