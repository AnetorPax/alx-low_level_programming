#include "main.h"
/**
 * _strlen_recursion - length of a string
 * @s: the string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s +1));
}

/**
 * compares - compares the character of a string
 * @s: string to compare
 * @j1: smallest iterator
 * @j2: biggest iterator
 * Return: 0
 */
int compares(char *s, int j1, int j2)
{
	if (*(s + j1) == *(s + j2))
	{
		if (j1 == j2 || j1 == j2 + 1)
			return (1);
		return (0 + compares(s, j1 + 1, j2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detect if string is palindrome
 * @s: string
 * Return: 1 if string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compares(s, 0, _strlen_recursion(s) - 1));
}
