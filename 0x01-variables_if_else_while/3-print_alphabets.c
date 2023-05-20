#include <stdio.h>
/**
 * main - the program thay prints alphabeth in lowercase.
 *
 * Return: 0 Always.
 */
int main(void)
{
	int n = 97;
	int x = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (x <= 90)
	{
		putchar(x);
		n++;
	}
	putchar('\n');
	return (0);
}
