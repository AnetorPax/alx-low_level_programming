#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @n: number of times to copy the char b
 * @b: char to be copied
 * Return: pointer to the momory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
