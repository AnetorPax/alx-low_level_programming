#include "main.h"

/**
 * *_memcpy - copies to a memory area
 * @n: the number of byte to be copied
 * @dest: destination memory area
 * @src: source memory area
 * Return: Pointer to dest
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
