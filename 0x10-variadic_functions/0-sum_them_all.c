#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * int sum_them_all - Ascertain the sum of all parameter given to it
 * @n: Number of parameters passed to the function
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list valist;


	if (n == 0)
		return (0);

	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
