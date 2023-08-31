#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Unsigned long integer to be printed in binary.
 *
 * Return: None.
 */
void print_binary(unsigned long int n)
{
	int shift = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while ((1UL << shift) <= n)
		shift++;

	shift--;

	while (shift >= 0)
	{
		putchar((n & (1UL << shift)) ? '1' : '0');
		shift--;
	}
}
