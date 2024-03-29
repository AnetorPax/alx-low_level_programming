#include "main.h"
#include <stdio.h>
/**
 * _memset - Fills memory with a constant byte
 * @s: pointer to the memory area.
 * @b: the constant byte
 * @n: The first byte
 * Return: the memory area s
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
