#include "lists.h"
/**
 * before_main - to execute function before the main function
 * Return: nothing
 */

void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
