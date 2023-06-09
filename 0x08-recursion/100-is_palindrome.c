#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome_helper - help the is_palindrome function
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
 * get_string_len - cal length of the string
 * @s: the string to be examined
 * Return: 0
 */
int get_string_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + get_string_len(s + 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be examined
 * Return: 1 if string is pallidrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = 0;

	if (s[0] == '\0')
		return (1);

	len = get_string_len(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
