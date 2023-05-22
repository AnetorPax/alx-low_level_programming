#include <stdio.h>
/**
 * main - prints combination of 3 digit numbers seperated by a comma
 * followed by a space. numbers are different, and for numbers of
 * the same condition only the smallest combination is printed
 * in ascending orderusing a maximum of 6 putchars function only.
 * Return: Always 0.
 */
int main(void)
{
	int x, y, z;

	for (x = 48; x <= 57; x++)
	{
		for (y = x + 49; y <= 57; y++)
		{
			for (z = y + 49; z <= 57; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x == 55 && y == 56 && z == 57)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
