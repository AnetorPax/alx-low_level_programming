#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the steing to be printed
 * Return: Always successful
 */

void print_rev(char *s)
{
	int i, j, k;

	i = 0;
	while (s[i] != '\0')

	{
		i++;
	}

	k = i;

	for (j = k - 1; j >= 0; j--)

	{
		_putchar(s[j]);
	}
	_putchar('\0');
}

