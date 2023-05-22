#include <stdio.h>
/**
 * main - prints all possible combination of single digit numbers
 * seperatedbby a comma followed by space
 * in ascending order.
 * Return: 0 Always Success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
