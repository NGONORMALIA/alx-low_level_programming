#include <stdio.h>

/**
 * print_to_98 - to list the number
 * @n: input number
 * Return: ALways the list
 */
void print_to_98(int n)
{
	if (n  > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
