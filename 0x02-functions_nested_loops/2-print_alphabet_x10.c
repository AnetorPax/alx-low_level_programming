#include "main.h"
/**
 * print_alphabet_x10 - prints lower case alphabet ten times
 * Return: Always(successful)
 */
void print_alphabet_x10(void)
{
	char r;
	int b = 0;

	while (b < 10)
	{
		for (r = 'a'; r <= 'z'; r++)
		{
			_putchar(r);
		}
		_putchar('\n');

		b++;
	}

}
