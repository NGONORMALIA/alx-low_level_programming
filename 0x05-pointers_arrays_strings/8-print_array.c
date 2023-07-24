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

	printf("%d", *(a + 0));
	for (i = 1; i < n; i++)
	{
		printf(", %d", *(a + i));
	}
	_putchar('\n');
}
