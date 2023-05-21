#include <stdio.h>
/**
 * main - The program prints aphabeth in lower case except q and e.
 *
 * Return: 0 Always Successful
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
