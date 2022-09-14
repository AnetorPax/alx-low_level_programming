#include<stdio.h>
#include<stdlib.h>
/**
 * main - Prints 3 digits numbers
 * Return: Always(successful)
 *
 */
int main(void)
{
	int c, n, b;

	for (c = '0'; c <= '9'; c++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			for (b = '0'; b <= '9'; b++)
			{
				if (c < n && n < b)
				{
					putchar(c);
					putchar(n);
					putchar(b);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);

}
