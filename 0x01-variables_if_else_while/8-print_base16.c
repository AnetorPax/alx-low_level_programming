#include<stdio.h>
#include<stdlib.h>

/**
 * main - Prints all the numbee od base 16
 * Return: Always (sucvessful)
 *
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);

}
