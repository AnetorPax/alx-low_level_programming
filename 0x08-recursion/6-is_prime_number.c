#include "main.h"
#include <stdio.h>
/**
 * is_prime_helper - prints 1 if input is a prime number
 * @n: number to be examined
 * @i: divisor for the recursion
 * Return: 0 Always success;
 */
int is_prime_helper(int n, int i)
{


	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_helper(n, i - 1));
}

/**
 * is_prime_number - prints prime numbers
 * @n: numbers to be examined
 * Return: 1 if input is prime number otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime_helper(n, n - 1));
}
