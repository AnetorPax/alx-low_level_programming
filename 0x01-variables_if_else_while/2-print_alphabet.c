#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints alphabet in lowercase followed by a new line.
 *
 * Return: 0 Always
 *
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
