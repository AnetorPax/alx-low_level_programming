#include "main.h"
/**
 * _isalpha - CHecks for alphabetic characters
 * @c: The parameter to bw wxaminwd
 * Return: 1 if c is a letter and o otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
