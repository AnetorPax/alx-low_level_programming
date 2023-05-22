#include <stdio.h>
/**
 * main - Prints a different combinations of two digits numbers
 * seperated by a comma followed by a space, mutiple combination
 * of the same set of numbers, print only the smallest
 * in ascending order.
 * Return: 0 Always Success
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = n; m <= 9; m++)
		{
			if (n == m)
			{
			continue;
			}
			putchar(n + '0');
			putchar(m + '0');
			if (n == 8 && m == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
