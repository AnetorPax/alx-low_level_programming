#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to be examined,
 * Return: 0 Always Success
 */
int _sqrt_recursion(int n)
{
	int start, end, result, mid;

	start = 1;
	end = n / 2;
	result = -1;
	mid = 0;

	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	while (start <= end)
	{
		mid = (start + end) / 2;

		if (mid * mid == n)
			return (mid);

		else if (mid * mid < n)
		{
			start = mid + 1;
			result = -1;
		}

		else
			end = mid - 1;
	}

	return (result);
}
