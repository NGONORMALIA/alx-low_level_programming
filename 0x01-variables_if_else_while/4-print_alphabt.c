#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point to print the alphabet without print q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (alpha = 'a'; alpha = 'z'; alpha++)
	{
	if (alpha != 'q' && alpha != 'e')
	{ putchar(alpha); }
	}
	putchar('\n');
	return (0);
}
