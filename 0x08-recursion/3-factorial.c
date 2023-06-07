#include "main.h"
#include <stdio.h>
/**
 * factorial - prints the factorial of a given number
 * @n: the number to be examined.
 * Return: Always 0 successful.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
