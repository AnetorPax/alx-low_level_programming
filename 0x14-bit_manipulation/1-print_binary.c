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
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int found_one = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (mask > 0)
	{
		if (n & mask)
		{
			putchar('1');
			found_one = 1;
		}
		else if (found_one)
		{
			putchar('0');
		}
		mask >>= 1;
	}
}
