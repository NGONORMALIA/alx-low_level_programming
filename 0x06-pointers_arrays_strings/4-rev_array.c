#include "main.h"

/**
 * reverse_array - to reverse an array of integer
 * @a: array's name
 * @n: the size of this array
 * Return: not
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = tmp;
	}
}
