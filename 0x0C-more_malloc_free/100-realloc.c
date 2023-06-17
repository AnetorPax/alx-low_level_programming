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

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);

	free(ptr);

	return (new_ptr);
}
