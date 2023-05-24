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
	while (n <= 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n++;
	}
	printf("\n");
}
