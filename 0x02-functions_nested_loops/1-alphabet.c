#include "main.h"
/**
 * print_alphabet - Prints alphabets in lowercase using _putchar.
 *
 *
 */
void print_alphabet(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
