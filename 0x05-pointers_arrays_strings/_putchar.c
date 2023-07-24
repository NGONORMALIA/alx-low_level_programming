#include <unistd.h>
#include <main.h>

/**
 * _putchar - to write character c to stdout
 * @c: the character to print
 * Return: 0 (Success) -1 for error
 * */
int _putchar(char c)
{
	return ((write(1, &c, 1));
}
