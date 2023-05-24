#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			int result = x * y;

			if (result < 10)
			{
				_putchar(result + '0');
				if (y == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
				if (y == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
