#include <stdio.h>
/**
 * main - Prints single digit nymbers of base 10 starting from 0.
 *
 *
 * Return: 0 Always Successful
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}

