#include "main.h"
#include <stdio.h>
/**
 * _memcpy - Copies memory area.
 * @src: Pointer to the src
 * @dest: Pointer to the dest.
 * @n: the number of byte from memory area.
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
