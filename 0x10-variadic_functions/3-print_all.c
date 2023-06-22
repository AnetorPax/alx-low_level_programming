#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Prints anything
 * @format: list of arguments passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int n = 0;
	char *str;

	va_start(args, format);

	while (format && format[n])
	{
		switch (format[n])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char*);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			n++;
			continue;
		}
		if (format[n + 1])
			printf(", ");
		n++;
	}

	printf("\n");
	va_end(args);
}
