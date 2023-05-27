#include "main.h"
#include <stdio.h>
/**
 * main - Prints the sum of multiples of 3 or 5
 * @n: number to be examined.
 * Return: 0 Always successful
 */
int main(void)
{
	int n;

	for (n = 0; n <= 1024; n++)
	{
		for (n % 3 == 0 || n % 5 == 0)
		{
			n = n + n;
		}
	}
	printf("%d\n", n);
}
