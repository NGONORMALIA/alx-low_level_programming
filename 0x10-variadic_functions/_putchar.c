#include <unistd.h>
#include "variadic_functions.h"

/**
 * _putchar - the entry to print some chracter
 * @c: the character to print
 * Return -1 if there is an error and 1 if not
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
