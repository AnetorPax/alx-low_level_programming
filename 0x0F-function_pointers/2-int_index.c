#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - The function searches for an interger
 * @array: the array to be examined
 * @size: size of the array
 * @cmp: Pointer to the function that will be used to compare elements
 * Return: -1 if size <= 0 and no matches, otherwise return first element
 * Author: AnetorPax
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
