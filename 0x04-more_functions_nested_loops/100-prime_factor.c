#include <stdio.h>
#include <stdlib.h>
/**
 * findLargestPrimeFactor - find the highest prime factor of a number
 * @number: parameter to be examined
 * Return: number
 */
long findLargestPrimeFactor(long number)
{
	long i;


	while (number % 2 == 0)
	{
		number /= 2;
	}

	for (i = 3; i <= number; i += 2)
	{
		if (number % i == 0)
		{
			number /= i;
		}
	}

	return (number);
}

/**
 * main - find the highest prime factor of a number
 * Return: Always 0.
 */

int main(void)
{
	long number = 612852475143;

	long largestPrimeFactor = findLargestPrimeFactor(number);

	printf("%ld\n", largestPrimeFactor);

	return (0);
}
