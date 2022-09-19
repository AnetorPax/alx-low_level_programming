#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * Return: Successful
 * @str: string to be accessed
 */

void puts2(char *str)
{
	int k, i;

	k = 0;

	while (str[k] != '\0')
	{
		k++;
	}

	for (i = 0; i < k; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
