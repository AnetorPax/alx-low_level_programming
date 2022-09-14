#include<stdio.h>

/**
 * main - Prints single numbers between 0 and 10
 *
 * Return: Always(succesaful)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);

}
