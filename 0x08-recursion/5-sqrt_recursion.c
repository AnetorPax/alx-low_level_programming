#include"main.h"


/**
 * helper - returns the natural square root of a number
 * @n: the number to be examined
 * @i: iterator
 * Return: the resulting suare root of n or -1.
 */
int helper(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == 1)
			return (i);
		else
			return (-1);
	}
	return (0 + helper(n, i + 1));
}

/**
 * _sqrt_recursion - finds the natural square root
 * of a number
 * @n: the number to be examined
 * @i: iterator
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if ( n == 1)
		return (1);
	return (helper(n, 2));
}
