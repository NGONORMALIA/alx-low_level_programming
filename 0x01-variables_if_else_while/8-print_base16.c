#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point to print all the digit in the base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;
	int i;

	for (i = 48; i <= 57; i++)
	{ putchar(i); }
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{ putchar(alpha); }
	putchar('\n');
	return (0);
}

