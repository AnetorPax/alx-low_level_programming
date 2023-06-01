#include "main.h"
/**
 * print_number - Prints an integer
 * @n: the interger to be examined
 *
 */
void print_number(int n)
{
	int x = 1; /* where variable x serves as divisor to print multiple digits */

	/* for negative numbers */
	if (n < 0)
	{
		_putchar('-');   /* converts to absolute number */
		n = -n;
	}

	/* loop to test the digits of n */
	while (n / x > 9)
		x *= 10;
	/* loop to print different digits of n */
	while (x != 0)
	{
		_putchar('0' + n / x);
		n %= x;
		x /= 10;
	}
}
