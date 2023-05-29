#include <stdio.h>
/**
 * print_fibonacci_sequence - Prints the fibonacci sequence of n
 * @n: The parameter to be examined
 */
void print_fibonacci_sequence(int n)
{
	unsigned long fib1, fib2, fib;

	fib1 = 1;
	fib2 = 2;

	printf("%lu, %lu, ", fib1, fib2);

	for (n = 3; n <= 98; n++)
	{
		fib = fib1 + fib2;
		printf("%lu", fib);

		if (n % 10 == 0 && n != 98)
			printf(", \n");
		else if (n != 98)
			printf(", ");

		fib1 = fib2;
		fib2 = fib;
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
