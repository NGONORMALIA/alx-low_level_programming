#include <stdio.h>
#include "main.h"

/**
 * print_array - to print an array of integer
 * @a: array's name
 * @n: lenght of this array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i =! (n - 1))
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
