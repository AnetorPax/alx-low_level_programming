#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: an array of integers
 * @n: Number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;  /* Declaring Variable */


	/* To account for NULL array */
	if (a == NULL || n <= 0)
		return;

	/* to print the  elements(n) in the array(a) */
	if (n == 1)
	{
		printf("%d", a[n]);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]); /* prints each elements */

			if (i != n - 1) /* printing comma and space */
			{
				printf(", ");
			}
		}
	}

	printf("\n");
}
