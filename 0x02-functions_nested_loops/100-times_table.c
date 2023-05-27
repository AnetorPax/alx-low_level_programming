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
			if ((mul >= 10) && (mul < 100))
			{
				if (y == n)
					printf("  %d", mul);
				else
					printf("  %d,", mul);
			}
			else if (mul < 10)
			{
				if (y == n)
					printf("   %d", mul);
				else
					printf("   %d,", mul);
			}
			else if (mul > 99)
			{
				if (y == n)
					printf(" %d", mul);
				else
					printf(" %d,", mul);
			}
		}
		printf("\n");
	}
	printf("\n");
}
