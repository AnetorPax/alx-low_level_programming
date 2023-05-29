#include <stdlib.h>
#include <time.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - prints positive or negative numbers
 * Return: 0 Always success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}