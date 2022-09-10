#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * Main - print a test depending on the number
 * *
 * * Return: Your text
 */

int main(void)
	{
		int n;
		/**
		 *Main - Prints if number is positive, zero or negative
		 *Return : Success()
		*/

		srand(time(0));
		
		/**Generate a random number
		 **
		*/

		n = rand() - RAND_MAX / 2;

		if (n > 0)
		{
			printf("%d is positive\n", n);
		}

		else if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			printf("%d is negative\n", n);
		}
		return (0);
	}

