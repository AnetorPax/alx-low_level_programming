#include "main.h"
/**
 * _strcat - The concatates two strings
 * @src: The sting to cancatate from
 * @dest: the destination to concatate to
 * Return: Dest
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest; /*assigning a pointer variable to the destination*/

	/*moves the pointer to the end of the destination string*/
	while (*p != '\0')
	{
		p++;
	}

	/* Copy the character in the src to dest */
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}

	*p = '\0'; /* Adds a null byte at then of the concatenated string*/

	return (dest);
}
