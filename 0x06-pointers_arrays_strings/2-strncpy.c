#include "main.h"
/**
 * _strncpy - Copies a string
 * @src: pointer to the source string
 * @dest: pointer to the destination string
 * @n: The most number of bytes to be copied from src
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* copying string from src to dest not more than n-bytes*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];


	/* finding the end of the new string at dest*/
	for ( ; i < n; i++)
		dest[i] = '\0';  /*adding the terminating NULL byte*/

	return (dest);
}
