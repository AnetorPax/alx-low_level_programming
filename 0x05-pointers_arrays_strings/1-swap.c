#include"main.h"
/**
 * swap_int - Swaps values of two integers
 * @a: First integer parameter
 * @b: Second integer parameter
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
