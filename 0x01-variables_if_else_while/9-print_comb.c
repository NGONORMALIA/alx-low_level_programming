#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point to print all digit in base 10 separate with a commac
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar('\0');
	}
	putchar('\n');
	return (0);
}
