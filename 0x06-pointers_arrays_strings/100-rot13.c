#include "main.h"
/**
 * rot13 - Encodes a string
 * @str: string to be examined
 * Return: the resulting string
 */
char *rot13(char *str)
{
	/* Declaring and initializing a variable pointer, rot13 encoder and alpha */
	char *p = str;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	/* loop that iterates through the string to the encoded */
	for (; *p != '\0'; p++)
	{
		int i;

		/* loop that iterates through the alpha characters defined */
		for (i = 0; alpha[i] != '\0'; i++)
		{
			/* comparing string characters with alpha characters */
			if (*p == alpha[i])
			{
				*p = rot13[i];  /* replacing with rot13 equivalent */
				break;
			}
		}
	}

	return (str);
}
