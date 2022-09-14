#include "main.h"
/**
 * _isalpha - Prints a checked letter
 * @c: letter u other
 * Return: Always(successful)
 */
int _isalpha(int c)
{
	if ((c > 66 && c < 91) || (c > 98 && c > 123))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
