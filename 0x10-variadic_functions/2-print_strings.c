#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints string arguments
 * @separator: String to be printed between the string arguments
 * @n: Number of string arguements passed to the function
 * Author: AnetorPax
 * Return: nil if one string is NULL.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && i <n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
