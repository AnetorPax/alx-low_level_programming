#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the n times table starting from 0
 * @n: The parameter to the function.
 */
void print_times_table(int n)
{
	int x, y, mul;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			mul = x * y;
			if (y != 0)
			{
				printf("%3d", mul);
			}
			else
			{
				printf("%d", mul);
			}

			if (y != n)
			{
				printf(", ");
			}
		}
		printf("\n");
	}

}
