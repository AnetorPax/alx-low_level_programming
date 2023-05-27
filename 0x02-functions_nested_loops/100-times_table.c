#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the n times table starting from 0
 * @n: The parameter to the function.
 *
 */
void print_times_table(int n)
{
	int x;
	int y;
	int mul;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			mul = x * y;
			printf("%d", mul);
			if ((mul >= 10) && (mul < 100) && (!(y == n)))
			{
				printf(",  ");
			}
			else if ((mul < 10) && (!(y == n)))
			{
				printf(",   ");
			}
			else if ((mul > 99) && (!(y == n)))
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
