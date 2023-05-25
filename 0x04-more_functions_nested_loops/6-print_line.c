#include "main.h"
/**
 * print_line - The function draws a straight line
 *
 * @n: Int Parameter to be used by the function
 */
void print_line(int n)
{
	int m = 0;

	while (m <= n)
	{
		if (m <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}

		m++;
	}
	_putchar('\n');
}
