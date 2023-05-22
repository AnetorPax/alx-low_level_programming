#include <stdio.h>
/**
 * main - Prints all possible cobinatiions of two two-digit
 * numbers, the two numbers seperated by a space, printed in ascending
 * order
 * Return: Always 0
 */
int main(void)
{
	int x, y;

	for (x = '0'; x <= 99; x++)
	{
		for (y = x; y <= 99; y++)
		{
			if (x != y)
			{
				putchar(x / 10);
				putchar(x % 10);
				putchar(' ');
				putchar(y / 10);
				putchar(y % 10);
				if (x < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return ('0');
}
