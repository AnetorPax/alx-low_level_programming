#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers fro 0 to 98
 * followed by a new line.
 * @n: Parameter to the function.
 * Return: o
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
	}

	else
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
	}
	printf("\n");
}
