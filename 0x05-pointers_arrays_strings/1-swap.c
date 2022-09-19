#include"main.h"
/**
 * swap_int - this function swaps the value of 2 int
 * @a: pointer to the first int value
 * @b: pointer to the second int value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
