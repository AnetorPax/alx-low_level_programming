#include "main.h"
/**
 * more_numbers - Prints 10times the numbers from 0 to 14, then a new line
 * Return: Always 0
 */
void more_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		int m = 0;
		while (m <= 14)
		{
			_putchar(m + '0');
			m++;
		}
		_putchar('\n');
		n++;
	}
}
