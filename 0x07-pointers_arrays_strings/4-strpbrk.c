#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Searches for a string for any of a set of bytes
 * @s: pointer to the string to be examined
 * @accept: points to a string whose byte is to search for.
 * Return: the pointer to the byte in s that matches one of the bytes in
 * accepts or NUll if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
}
