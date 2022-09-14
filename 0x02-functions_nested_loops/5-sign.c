#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 and prints + if greater than zero
 * 0 and prints 0 if equal to zero
 * -1 and prints - if lesser than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

}
