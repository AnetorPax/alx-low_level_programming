#include <stdio.h>
/**
 * main - prints all base 16 numbers follwed by a new line.
 *
 * Return: 0 Always Success.
 */
int main(void)
{
	int n;
	int x;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (x = 97; x <= 102; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
