#include <unistd.h>
#include <main.h>

/**
 * _putchar - write the charater that he will receipt
 * @c: input character
 * Return:  1 for success
 * On error, -1 is returned, and errno is set appropriately.
 * */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
