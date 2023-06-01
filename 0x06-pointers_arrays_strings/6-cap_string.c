#include "main.h"
/**
 * cap_string - capatilizes all words of a string
 * @str: String to be examined
 * Return: str.
 */
char *cap_string(char *str)
{
	char *p = str; /* declaring and intializing new pointer variable */
	/* if cap = 1 prepare tp print next character */
	int cap = 1; /* Capatalize flag to set next character to capitalize */


	/* Loop to test and capitalize each character in the string */
	while (*p != '\0')
	{
		if (cap && *p >= 'a' && *p <= 'z')
		{
			*p = *p - ('a' - 'A'); /* Capitalize the current character */
		}

		/* Nested loop to test if current character is a seperator */
		if (*p == ' ' || *p == '\t' || *p == '\n' || *p == ',' || *p == ';' ||
		     *p == '.' || *p == '!' || *p == '?' || *p == '"' || *p == '(' ||
		     *p == ')' || *p == '{' || *p == '}')
		{
			cap = 1; /* setting capitalize flag */
		}
		else
		{
			cap = 0; /* Reset the capitalize flag */
		}

		p++;
	}

	return (str);
}
