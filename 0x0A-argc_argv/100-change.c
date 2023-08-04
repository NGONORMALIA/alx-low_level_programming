#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of the command line
 * @argv: the amount of cents to give back
 * Return: 1 if error
 */
int main(int argc, char *argv[])
{
	int i, k, l, j, m, n, t, s, u, v;

	k = atoi(argv[1]);
		if (argc != 2)
		{
			printf("Error\n");
			return (1);
		}
		else if (k < 0)
		{
			printf("0\n");
		}
		else
		{
			l = k / 25;
			j = k % 25;
			m = j / 10;
			n = j % 10;
			t = n / 5;
			s = n % 5;
			u = s / 2;
			v = s % 2;
			i = l + m + t + u + v;
			printf("%d\n", i);
			return (0);
		}

}
