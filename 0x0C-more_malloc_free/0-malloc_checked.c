#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Allocates memory using malloc and exit with 98 if failure
 * @b: the parameter to which the memory is allocated for
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	
	return (ptr);
}
