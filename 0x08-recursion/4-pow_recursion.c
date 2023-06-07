#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - returns value of a number raised to the power of another
 * @x: the first function parameter
 * @y: the second function parameters.
 * Return: 0 Successful always
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}
