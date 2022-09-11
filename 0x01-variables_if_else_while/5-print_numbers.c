#include<stdio.h>
/**
 * main - prints single numbwes less that 10
 * Return: Always(successful)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
			putchar(n);
	}

	putchar('\n');

	return (0);

}

