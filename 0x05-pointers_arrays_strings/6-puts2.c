#include "main.h"
/**
 * puts2 - Prints every other character in a string
 * @str: The string to be examined
 */
void puts2(char *str)
{
	int len, i;



	/* Tis loop handles string with NULL input*/
	if (str == NULL)
	{
		return;
	}


	/* This loop finds the length of the string. initializing len as 0*/
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	/*This loop is used to print the string as i increases*/
	i = 0;
	for ( i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar ('\n');
}
