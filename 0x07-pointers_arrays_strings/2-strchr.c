#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates a character in a string
 * @c: the character to be found
 * @s: a pointer to the string to be examined
 * Return: scr
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	if (*s == 0)
		return (s);

	return (NULL);
}
