#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * largest_prime - prints the largest prime factor of a number.
 * @n: parameter to be examined.
 * Return: largest_prime
 */
/**unsigned long largest_prime(unsigned long n)
{
	unsigned long prime;
	unsigned largest_prime;

	prime = 2;
	largest_prime = 1;

	while (prime * prime <= n)
	{
		if (n % prime == 0)
		{
			largest_prime = prime;
			while (n % prime == 0)
			{
				n /= prime;
			}
		}
		prime++;
	}

	if (n > largest_prime)
	{
		largest_prime = n;
	}

	return (largest_prime);
}
**/
/**
 * main - find the highest prime factor of a number
 * Return: Always 0.
 */
int main(void)
{

	long int n;
	int prime;
	int largest_prime_factor;

	n = 612852475143;
	for (prime = 2; n > 1; prime++)
	{
		while (n % prime == 0)
		{
			n = n / prime;
		}
	}
	largest_prime_factor = prime - 1;
	printf("%d\n", largest_prime_factor);

	return (0);
}
