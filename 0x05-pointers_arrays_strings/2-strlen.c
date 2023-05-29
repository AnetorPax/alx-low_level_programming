#include "main.h"
/**
 * _strlen - Function that return the length of a string.
 * @s: The parameter to be examined.
 * Return: strlen
 */
int _strlen(char *s)
{
	int strlen;

	strlen = 0;
	for (; *s != '\0'; s++)
	{
		strlen++;
	}

	return (strlen);
}
