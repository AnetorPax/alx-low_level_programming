#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: pointer to the array of numbers
 * @n: The number of elements of the array
 */
void reverse_array(int *a, int n)
{
	/* iddentifying the first and last element in the array*/
	int start = 0;
	int end = n - 1;
	int temp; /*declaration of a new varaible to hold swap*/

	while (start < end) /*condition for swapping elements*/
	{
		/*Swap elements at the start and end index*/
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;


		/*Move the start index forward and end index backward*/
		start++;
		end--;
	}
}
