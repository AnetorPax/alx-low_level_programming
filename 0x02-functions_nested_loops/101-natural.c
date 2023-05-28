#include "main.h"
#include <stdio.h>
/**
 * main - Prints the sum of multiples of 3 or 5
 *
 * Return: 0 Always successful
 */
int main(void)
{
	int n;
	int sum;

	sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
