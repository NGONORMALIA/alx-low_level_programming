#include <stdio.h>

/**
 * main - fibonaci number
 * Return: the value
 */
int main(void)
{
	long int a, b, fn, afn;

	a = 1;
	b = 2;
	fn = afn = 0;
	while (fn <= 4000000)
	{
		fn = a + b;
		a = b;
		b = fn;
		if ((a % 2) == 0)
		{
			afn += a;
		}
	}
	printf("%ld\n", afn);
	return (0);
}
