#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @num: Parameter to be examined.
 * Return: lastDigit
 */
int print_last_digit(int num)
{
	int lastDigit = num % 10;

	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}
	else
	{
		lastDigit = lastDigit;
	}
	_putchar('0' + lastDigit);
	return (lastDigit);
}
