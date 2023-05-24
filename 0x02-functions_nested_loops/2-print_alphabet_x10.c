#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabeth in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

		for (x = 0; x < 10; x++)
		{
			for (y = 97; y <= 122; y++)
			{
				_putchar(y);
			}
			_putchar('\n');
		}
}
