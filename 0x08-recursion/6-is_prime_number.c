#include "main.h"
/**
 * oh_prime - prime number
 * @i: input number
 * @j: iterator
 * Return: 1 if prime else 0
 */

int oh_prime(unsigned int i, unsigned int j)
{
	if (i % j == 0)
	{
		if (i == j)
			return (1);
		else
			return (0);
	}
	return (0 + oh_prime(i, j + 1));
}

/**
 * is_prime_number - prints a prime number
 * @n: input number
 * Return: 1 if input is a prime number else 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (oh_prime(n, 2));
}
