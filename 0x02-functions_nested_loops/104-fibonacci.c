#include <stdio.h>
/**
 * print_fibonacci_sequence - Prints the fibonacci sequence of n
 * @n: The parameter to be examined
 */
void print_fibonacci_sequence(int n)
{
	int x;
	unsigned long fib1;
	unsigned long fib2;
	unsigned long fib;

	x = 2;
	fib1 = 1;
	fib2 = 2;
	fib = 0;

	printf("%lu, %lu", fib1, fib2);

	while (x < n - 1)
	{
		fib = fib1 + fib2;
		printf(", %lu", fib);

		fib1 = fib2;
		fib2 = fib;
		x++;
	}

	printf("\n");
}

/**
 * main - prints fibonacci sequence using print_fibonacci_sequence function.
 * Return: 0 Always successful
 */
int main(void)
{
	int n;

	n = 98;
	print_fibonacci_sequence(n);
	return (0);
}
