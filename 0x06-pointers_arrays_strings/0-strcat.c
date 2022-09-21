#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcat - prints the concatenates of two strings
 * @src: the string to be appended
 * @dest: the string to be appened to
 * Return: the string dest
 */

char *_strcat(char *dest, char *src)
{
	static int i = 0;
	static int j = 0;

	if (!src[i])
	{
		src[i] = '\0';
	}
	else
	{
		dest[i + j] = src[i];
		i++;
		j++;
	}


	dest[i] = '\0';
	
	return (dest);
}
