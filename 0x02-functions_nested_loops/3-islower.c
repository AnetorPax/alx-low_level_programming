#include "main.h"
/**
 * _islower - prints checked lowercase character
 * @c: integer 1 or 0
 * Return: Always(successful)
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
