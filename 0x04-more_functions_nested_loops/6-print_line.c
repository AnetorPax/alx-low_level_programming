#include "main.h"
/**
 * print_line - The function draws a straight line
 *
 * @n: Int Parameter to be used by the function
 */
void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		while (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
