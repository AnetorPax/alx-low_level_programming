#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - prints 1 if input is a prime number
 * @n: number to be examined
 * Return: 0 Always success;
 */
int is_prime_number(int n)
{
	int i;


	if (n <= 1)
		return (0);

	else if (n <= 3)
		return (-1);

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
