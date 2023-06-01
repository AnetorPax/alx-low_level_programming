#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string using leet map and replacements
 * @str: string to be examined
 * Return: Resulting string str
 */

char *leet(char *str)
{
	int i;
	char *p = str;
	char leet_letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet_encoding[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};


	/* The loop to iterate through the string */
	for (; *p != '\0'; p++)
	{
		for (i = 0; i < 10; i++)
		{
			/* conditional statement to test if string matches the leet map */
			if (*p == leet_letters[i])
			{
				*p = leet_encoding[i]; /* leet character replacement */
				break;
			}
		}
	}

	return (str); /* return resulting string */
}
