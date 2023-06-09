#include "main.h"
#include <stdio.h>
/**
 * wildcmp - compares two strings with  recursion
 * @s1: the first string
 * @s2: the second string
 * Return: 0
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are considered identical*/
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the current characters match or s2 has a wildcard '*' */
	if (*s1 == *s2 || *s2 == '*')
	{
		if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
			return (0);

		if (wildcmp(s1 + 1, s2 + 1) || wildcmp(s1 + 1, s2)
		    || wildcmp(s1, s2 + 1))
			return (1);
	}

	/* If none of the conditions above are met, the strings are not identical */
	return (0);
}
/**
 * wildcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 * Return: if both string are identical and 0 if otherwise.

int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}
*/
