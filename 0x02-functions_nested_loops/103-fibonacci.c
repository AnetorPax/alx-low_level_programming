#include <stdio.h>
#include "main.h"
/**
 * main - Print the sum of the even valued terms of the fibonacci sequence
 * of value not exceeding 4,000,000.
 * Return: 0 Always success.
 */
int main(void)
{
	unsigned long x;
	unsigned long fib1;
	unsigned long fib2;
	unsigned long fib;
	unsigned long sum;

	x = 4000000;
	fib1 = 1;
	fib2 = 2;
	fib = 0;
	sum = 0;

	while (fib2 <= x)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}

		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;
	}

	printf("%lu\n", sum);
	return (0);
}
