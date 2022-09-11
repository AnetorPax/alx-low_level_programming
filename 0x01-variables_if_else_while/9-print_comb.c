#include<stdio.h>
#include<stdlib.h>

/**
 * mains - Prints simgle digits number in ascending order
 * Return: Always(successful)
 *
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);

}
