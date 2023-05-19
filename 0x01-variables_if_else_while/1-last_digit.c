#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program will assign a random number to the variable n
 * each time it is executed.
 *
 * Return: 0 Always.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of n is greater than 5");
	}
	else if (n == 0)
	{
		printf("Last digit of n is zero\n");
	}
	else if (n != 0 && n < 6;)
	{
		printf("Last digit of n is less than 6 and not 0\n");
	}
	return (0);
}
