#include<stdio.h>
#include<stdlib.h>
/**
 * main - Prints lower case alphabeths in reverse
 *
 * Return: Always(successful)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);

}
