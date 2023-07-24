#include "main.h"

/**
 * swap_int - use to swap value of two integer
 * @a: first integer
 * @b: second integer
 * Return: Not return
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
