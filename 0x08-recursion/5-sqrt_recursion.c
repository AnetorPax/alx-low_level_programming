#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion_helper - helps use find square root recursively
 * @n: the number to be examined
 * @guess: parameter to the function
 * Return: 0 Always Success
 */
int _sqrt_recursion_helper(int n, int guess)
{

	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (_sqrt_recursion_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to be examined.
 * Return: -1 if the number doesnt have a natural squareroot
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	if (n < 0)
		return (-1);

	return (_sqrt_recursion_helper(n, 0));
}
