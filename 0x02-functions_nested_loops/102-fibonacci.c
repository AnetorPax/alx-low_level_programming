#include <stdio.h>
#include "main.h"
/**
 * main - prints the first fibonancci numbers starting with 1 and 2.
 * Return: ) Always successful.
 */
int main(void)
{
	int n;
	int x;
	unsigned long fib1;
	unsigned long fib2;
	unsigned long fib;

	n = 50;
	fib1 = 1;
	fib2 = 2;

	printf("%lu, %lu", fib1, fib2);

	for (x = 2; x <= n; x++)
	{
		fib = fib1 + fib2;
		printf(", %lu", fib);
		fib1 = fib2;
		fib2 = fib;
	}

	printf("\n");

	return (0);
}
