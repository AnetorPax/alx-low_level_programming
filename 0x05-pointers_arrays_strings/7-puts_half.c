#include "main.h"
/**
 * puts_half - Prints half of a string
 * @str: String to be examined
 */
void puts_half(char *str)
{
	int len, i, start_index;
	/*Take care of strings with NULL input*/
	if (str == NULL)
		return;

	/*To find the lenth of the string*/
	len = 0;
	i = 0;



	/* To find the length of the string*/
	while (str[len] != '\0')
	{
		len++;
	}

	start_index = (len - 1) / 2 + 1; /* to know where to begin printing */

	/* To print the last half of the string*/
	for (i = start_index; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
