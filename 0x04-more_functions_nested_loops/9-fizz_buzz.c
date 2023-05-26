#include <stdio.h>
/**
 * main - prints numbers from 1 to 100, followed by a new line such that for
 * multiples of 3 print FIZZ and for multiples of five print BUZZ, and for the
 * multiples of three and five print BUZZFIZZ.
 * Return: 0 Always success.
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (x % 5 == 0)
		{
			if (x < 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}

		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}

		else
		{
			printf("%d ", x);
		}
	}

	printf("\n");
	return (0);
}
