#include "main.h"
/**
 * rev_string - Write a function that reverses a string
 * @s: the string to be worked on
 * Return: Always succesaful
 */

void rev_string(char *s)
{
	int len, i, len1;
	char temp;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len1];
		s[len1--] = temp;
	}
}
