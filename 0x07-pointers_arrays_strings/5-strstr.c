#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substing
 * @haystack: the string to be searched.
 * @needle: the string to search for in haystack
 * Return: a pointer to the beginning of the substring or NULL if the substring
 * is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
