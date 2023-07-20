#include <stdio.h>
/**
 * main - Entry point to find and print fizz buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, s;

	s = 1;
	printf("%d", s);
	for (i  = 2; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf(" FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf(" Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
