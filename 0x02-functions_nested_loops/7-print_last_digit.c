#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @num: Parameter to be examined.
 * Return: lastDigit
 */
int print_last_digit(int num)
{
	int lastDigit = num % 10;

	if (num < 0)
	{
		num = -num;
	}
	else
	{
		num = num;
	}
	_putchar('0' + lastDigit);
	return (lastDigit);
}
