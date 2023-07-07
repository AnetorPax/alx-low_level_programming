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
	unsigned long int mask;
	int flag = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask != 0)
	{
		if ((n & mask) != 0)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag == 1)
		{
			putchar('0');
		}

		mask = mask >> 1;
	}
}
