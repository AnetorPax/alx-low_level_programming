#include <stdio.h>
/**
 * main - Prints the lower case alphabeth in reverse.
 *
 * Return: 0 Always Success.
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
