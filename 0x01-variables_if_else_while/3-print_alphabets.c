#include<stdio.h>
/**
 * *main - Prints alphbeths in lower case and upper case
 * Return: Always (successful)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
