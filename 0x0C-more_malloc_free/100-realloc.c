#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to ne examined
 * @old_size: number of byte previously reserved for ptr
 * @new_size: new memory to be allocated.
 * Return: pointer to reallocated memory block or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;
	char *source, *destination;

	new_ptr = malloc(new_size);
	source = (char *)ptr;
	destination = (char *)new_ptr;

	if (new_size > old_size)
	{
		for (; i < new_size; i++)
			destination[i] = 0;
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_ptr == NULL)
		return (NULL);


	for (i = 0; i < old_size && i < new_size; i++)
		destination[i] = source[i];


	free(ptr);

	return (new_ptr);
}
