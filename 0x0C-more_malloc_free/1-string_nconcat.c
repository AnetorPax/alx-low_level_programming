#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - It concatenates two strings
 * @s1: First string
 * @s2: second string
 * @n: The number of byte of s2 to be added to s1
 * Return: NULL if failure otherwise concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, conc_len = 0;
	char *conc;
	unsigned int i, j;

	/* "if NULL is paased treat string as empty" requirement check */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* to obtain the length of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	/* to obtain the length of the concatenated string */
	if (n >= len2)
		conc_len = len1 + len2;
	else
		conc_len = len1 + n;
	/* memory allocation to concatenated string */
	conc = malloc(sizeof(char) * (conc_len + 1));
	/* Testing succesful memory allocation*/
	if (conc == NULL)
		return (NULL);
	/* COpying s1 into conc memory */
	for (i = 0; i < len1; i++)
		conc[i] = s1[i];
	/* copying the first n characters of s2 into conc */
	for (j = 0; j < n && s2[j] != '\0'; j++)
		conc[i++] = s2[j];
	conc[i] = '\0';

	return (conc);
}
