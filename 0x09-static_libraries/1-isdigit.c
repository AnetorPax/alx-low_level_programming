#include "main.h"
/**
 * _isdigit - The function checks for a digit(0 through 9).
 * @c: Parameter of the function to be examined
 * Return: 1 if c is a digit and 0 if otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
