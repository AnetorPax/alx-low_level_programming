#include "main.h"
#include <stdio.h>
/**
 * wildcmp = Compares if two strings are identical
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if both string are identical, 0 if otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are considered identical*/
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the current characters match or s2 has a wildcard '*' */
	if (*s1 == *s2 || *s2 == '*')
	{
		/* If s2 has a wildcard '*', it can match any substring of s1 */
		if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
			return (0); /* If s2 has a wildcard '*' at the end and s1*/

/* Recursively compare the rest of the strings */
		if (wildcmp(s1 + 1, s2 + 1) || wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1); /* At least one of the recursive match */
	}

	/* If none of the conditions above are met, the strings are not identical */
	return (0);
}