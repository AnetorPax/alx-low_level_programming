#include"main.h"
/**
 * *_strncpy - prints a function that copies a string
 * @src: source string
 * @dest: destination string
 * @n: number of bytes to be copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	n = 0;

	while (dest[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
