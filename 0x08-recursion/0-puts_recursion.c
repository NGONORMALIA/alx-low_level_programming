#include "main.h"

/**
 * _puts_recursion - to print a string using recursion
 * @s: the string to print
 * Return: not
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
