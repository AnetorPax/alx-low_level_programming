#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates a character in a string
 * @s: string to be searched 
 * @c: the character to find 
 * Return: a pointer on first occurence of c
 * NULL if not found 
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}

