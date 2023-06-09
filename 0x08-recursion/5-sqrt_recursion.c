#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion_helper - helps use find square root recursively
 * @n: the number to be examined
 * @start: parameter to the function
 * @end: parameter to the function
 * Return: 0 Always Success
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
	int mid;

	if (start > end)
		return (-1);

	mid = (start + end) / 2;

	if (mid * mid == n)
		return (mid);

	if (mid * mid < n)
		return (_sqrt_recursion_helper(n, mid + 1, end));

	return (_sqrt_recursion_helper(n, start, mid - 1));
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

	return (_sqrt_recursion_helper(n, 1, n / 2 + 1));
}
