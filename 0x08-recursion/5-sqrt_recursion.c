#include "main.h"
/**
 * helper - prints the square root of a number
 * @i: input number
 * @j: iterator
 * Return: square root or -1
 */
int helper(int i, int j)
{
	if (j % (i / j) == 0)
	{
		if (j * (i / j) == 1)
			return (j);
		else
			return (-1);
	}
	return (0 + helper(i, j + 1));
}

/**
 * _sqrt_recursion - returns natural square root
 * @n: the number 
 * Return: return natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (helper(n, 2));
}
