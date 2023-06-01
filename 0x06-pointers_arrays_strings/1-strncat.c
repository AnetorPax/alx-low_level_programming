#include "main.h"
/**
 * _strncat - Concatenates two strings using n bytes from src
 * @src: pointer to the source string
 * @dest: pointer to the destination string
 * @n: The byte of src to begin the copy
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest; /*delaring and initializing a pointer variable to dest*/

	/* Move the new pointer to the end of the dest string */
	while (*p != '\0')
	{
		p++;
	}

	/* To copy string from at most n bytes of src to dest */
	while (*src != '\0' && n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}

	/* Add terminating NULL byte to dest */
	*p = '\0';

	return (dest);
}
