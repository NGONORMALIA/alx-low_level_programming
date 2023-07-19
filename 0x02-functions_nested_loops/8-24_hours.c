#include "main.h"

/**
 * jack_bauer - to print time
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int a, z, k, l;

	for (a = 0; a <= 2; a++)
	{
			for (z = 0; z <= 9; z++)
			{
				for (k = 0; k <= 5; k++)
				{
					for (l = 0; l <= 9; l++)
					{
						if (a >= 2 && z >= 4)
							break;
						_putchar(a + 48);
						_putchar(z + 48);
						_putchar(':');
						_putchar(k + 48);
						_putchar(l + 48);
						_putchar('\n');
					}
				}
			}
	}
}
