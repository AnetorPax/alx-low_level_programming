#include"main.h"
/**
 * rot13 - encodes a string using rot13.
 * @a: string to be encoded
 * Return: the resulting string
 */

char *rot13(char *s)
{
	int i, j;

	char n[] = "AZCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char m[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; n[j] != '\0'; j++)
		{
			if (s[i] == n[j])
			{
				s[i] = m[j];
				break;
			}
		}
	}
	return (s);
}
