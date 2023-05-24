#include "main.h"
/**
 * main - Prints alphabets in lowercase using _putchar.
 *
 * Return: 0 Always Success.
 */
int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
	return (0);
}
