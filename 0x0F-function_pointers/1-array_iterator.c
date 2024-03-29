#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - Executes a function given as a parameter on an array
 * @size: size of the array
 * @action: pointer to the chosen function to be executed
 * @array: the array to be worked on
 * Author: Anetorpax
 * Return: VOid function returns nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
