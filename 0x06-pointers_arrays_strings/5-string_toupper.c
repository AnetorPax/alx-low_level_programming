#include "main.h"
/**
 * string_toupper - changes all lower case characters of a string to uppercase
 * @str: string to be examined
 * Return: New char
 */
char *string_toupper(char *str)
{
	char *p = str; /*declaring and initailizing a pointer variable*/


	/*loop to iddentify lowercase characters*/
	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - ('a' - 'A'); /*converting lowercase to uppercase*/
		}
		p++;
	}
	return (str);
}
