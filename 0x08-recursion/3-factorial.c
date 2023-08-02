#include "main.h"

/**
 * factorial - to print the factorial of an integer
 * @n: the integer to print his factorial
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
