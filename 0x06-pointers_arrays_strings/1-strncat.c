#include"main.h"
/**
 * *_strncat - Prints the result of concatenating 2 steings
 * @dest: destination string 
 * @src: source string
 * @n: number of byte of source string to concate
 * Return: destinion string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
