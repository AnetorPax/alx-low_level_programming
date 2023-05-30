#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copies a string from src to dest including the null byte
 * @src: the source that the string is copied from
 * @dest: the destination being copied to
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	/* copying src to dest */

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*(dest + 1) = '\0';


	return (dest_start);
}
