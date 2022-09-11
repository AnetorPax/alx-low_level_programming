#include<stdio.h>

/**
 * main - Prints all possible combination of 2digits numbers
 * Return: Always(successful)
 *
 */
int main(void)
{
	int i, q;

	for (i = 0; i < 100; i++)
	{
		for (q = 0; q < 100; q++)
		{
			if (i < q)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar((q / 10) + 48);
				putchar(' ');
				putchar((q % 10) + 48);
				if (i != 98 || q != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}

