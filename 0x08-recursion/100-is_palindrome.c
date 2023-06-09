#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome_helper(char *s, int start, int end)
 * @s: sting to be examined,
 * @start: beginning of our string
 * @end: end of our string
 * Return: 0
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be examined
 * Returns: 1 if string is pallidrome and 0 if not
 */
int is_palindrome(char *s)
{
	int end = 0;

	if (s[0] == '\0')
		return (1);

	while (s[end + 1] != '\0')
		end++;

	return (is_palindrome_helper(s, 0, end));
}
