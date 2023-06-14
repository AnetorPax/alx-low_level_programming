#include "main.h"
/**
 * _strdup - Returns a duplicate string
 * @str: The string to be duplicated
 * Return: a pointer to the duplicate string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	/* output NULL if string is empty */
	if (str == NULL)
		return (NULL);

	/* to get the length of str, so as to allocate needed memory*/
	while (str[len] != '\0')
		len++;

	/* Allocating needed memory to dup pointer */
	dup = malloc((len + 1) * sizeof(char));

	/* return NULL if dup is empty, testing successful malloc*/
	if (dup == NULL)
		return (NULL);

	/* to copy the contents of str into allocated memory dup */
	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
