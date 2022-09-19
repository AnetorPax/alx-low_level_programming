#include"main.h"
/**
 * _strlen - Prints the length of a string
* @s: the string to evaluate
* return: lenth of the string
*/

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
