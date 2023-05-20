#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to the variable n each time it is executed.
 *
 * Return: 0 ALways.
 */
int main(void)
{
	int n;
	int ldt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldt = n % 10;
	if (ldt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ldt);
	}
	else if (ldt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ldt);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldt);
	}
	return (0);
}
