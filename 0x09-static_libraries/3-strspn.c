#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to examined
 * @accept: the byte to be search for
 * Return: The number of byte in the initial segemnt of byte from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i, j, found;

	count = 0;
	for (i = 0; s[i]; i++)
	{
		found =  0;
		for (j = 0;  accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}

		if (!found)
			break;

		count++;
	}

	return (count);
}
