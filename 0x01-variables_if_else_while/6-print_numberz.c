#include <stdio.h>
/**
 * main - Prints all single digits of base 10 starting from 0.
 *
 * Return: 0 ALways
 */
int main(void)
{
	int n = 0;

	for   (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');

	return (0);
}


