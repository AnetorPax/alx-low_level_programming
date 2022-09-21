#include"main.h"
/**
 * leet - encodes a syring 1337
 * @a: string to encoded 
 * Return: the resulting string
 */

char *leet(char *a)
{
	int i, j;

	char *n = "aAeEoOtTlL";
	char *m = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == n[j])
			{
				a[i] = m[j];
			}
		}
	}
	return (a);
}
