#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: String to be printed
 */
void print_rev(char *s)
{
	/* Declaration of a new varaibles*/
	int len;
	int i;



	/* Takes care for any NULL string input*/
	if (s == NULL)
	{
		return;
	}

	/* Find the length of the string*/
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	/* The loop prints the string in reverse*/
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
