#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - It allocates memory for an array, using malloc
 * @nmemb: the element in the array
 * @size: the size of each element
 * Return: NULL if nmemb or size is zero and if _callocs fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int size_t, i;
	unsigned char *byte_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	size_t = nmemb * size;

	ptr = malloc(size_t);
	if (ptr == NULL)
		return (NULL);

	byte_ptr = (unsigned char *)ptr;
	for (i = 0; i < size_t; i++)
		byte_ptr[i] = 0;

	return (ptr);
}
