#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be examined
 * Returns: 1 if string is pallidrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int i = 0;
	int j = len - 1;



	if (s == NULL)
		return (0);

	while (i < j)
	{
		if (s[i] != s[j])
			return (0);
		i++;
		j--;
	}

	return (1);
}
