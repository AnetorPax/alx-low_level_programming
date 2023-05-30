#include "main.h"
/**
 * rev_string - Reverse a string
 * @s:the string to be reversed
 */
void rev_string(char *s)
{
	/* Declaring variables */
	int len;
	int i;


	/* To handle NULL input strings */
	if (s == NULL)
	{
		return;
	}

	/* Calculating the length of the string*/
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	/* Check if the last character is a newline character */

	if (len > 0 && s[len - 1] == '\n')
	{
		len--;           /*Reduce len value by 1 excluding the newline*/
		s[len] = '\0';  /*Replace new line with a NULL character*/
	}

	/* To print the string in reverse*/
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return;
}
