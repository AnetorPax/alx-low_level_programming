#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string between each number
 * @n: number of parameters to the function
 * Return: Nothing
 * Author: AnetorPax
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	va_start(valist, n);


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		else if (separator == NULL)
			return;
	}
	va_end(valist);

	printf("\n");
}
