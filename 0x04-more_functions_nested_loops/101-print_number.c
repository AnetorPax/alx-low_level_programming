#include "main.h"
/**
 * print_number - Prints an integer.
 * @n: The parameter to the function
 */
void print_number(int n)
{
	int divisor;
	int temp;



	if (n > 0 && n < 10)
	{
		_putchar(n + '0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	divisor = 1;
	temp = n;

	while (temp > 9)
	{
		divisor *= 10;
		temp /= 10;
	}

	while (divisor > 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}
