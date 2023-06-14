#include "main.h"
/**
 * str_concat - concatates two strings
 * @s1: the first string to be concatated
 * @s2: the second string to be concatated
 * Return: Concatated string, or NULL if failure.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len_s1 = 0, len_s2 = 0, i, j;
	char *conc;

	/* returning empty string if s1 and/or s2 equals NULL */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* finding the length od s1 and s2 */
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	/* Allocatingnthe right a,ount of memory to hold s1 + s2 */
	conc = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	/* to test successful malloc */
	if (conc == NULL)
		return (NULL);

	/* concatating s1 and s2 in the pointer outputed by malloc */
	for (i = 0; i < len_s1; i++)
		conc[i] = s1[i];
	for (j = 0; j < len_s2; j++)
		conc[i++] = s2[j];

	conc[i] = '\0';

	return (conc);
}
