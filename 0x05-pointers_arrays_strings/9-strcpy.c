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
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
