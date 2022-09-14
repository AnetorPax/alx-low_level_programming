#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * Return: 1 and prints + if greater than zero
 * 0 and prints 0 if equal to zero
 * -1 and prints - if less than zero
 */
int print_sign(int r)
{
	if (r > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (r == 0)
	{
		_putchar(0);
		return (0);
	}
	else if (r < 0)
	{
		_putchar(-1);
		return ('-');
	}
}
