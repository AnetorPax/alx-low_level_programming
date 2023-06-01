#include "main.h"
/**
 * _strcat - The concatates two strings
 * @src: The sting to cancatate from
 * @dest: the destination to concatate to
 * Return: Dest
 */
char *_strcat(char *dest, char *src)
{
	char *originalDest = dest;

	/*Finds the end of the destination string*/
	while (*dest != '\0')
	{
		dest++;
	}

	/* Copy the character in the src to dest */
	while (*src != '\0')
	{
		*dest = *src;
		_putchar(*dest);
		dest++;
		src++;
	}

	*dest = '\0'; /* Adds a null byte at then of the concatenated string*/

	return (originalDest);
}
