#include "main.h"
#include <stdio.h>
/**
 * wildcmp_helper - helps the wildcmp funstiion from the car
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if both string are identical, 0 if otherwise
 */
int wildcmp_helper(char *s1, char *s2)
{
	/* If both strings are empty, they are considered identical*/
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the current characters match or s2 has a wildcard '*' */
	if (*s1 == *s2)
		return (wildcmp_helper(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp_helper(s1, s2 + 1) || wildcmp_helper(s1 + 1, s2));


	/* If none of the conditions above are met, the strings are not identical */
	return (0);
}
/**
 * wildcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 * Return: if both string are identical and 0 if otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}
