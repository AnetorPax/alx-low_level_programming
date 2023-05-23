#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit
 * numbers, fulfilling certain conditions with the putchar function.
 *
 * Return: Always 0.
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 99; x++)
	{
		for (y = x; y <= 99; y++)
		{
			if (x != y)
			{
				putchar('0' + (x / 10));
				putchar('0' + (x % 10));
				putchar(32);
				putchar('0' + (y / 10));
				putchar('0' + (y % 10));
				if (!(x == 98 && y == 99))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar(10);
	return (0);
}
