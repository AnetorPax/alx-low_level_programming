#include "main.h"
/**
 * _isupper - The function checks for uppercase character
 * @c: Parameter to be examined.
 * Return: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
