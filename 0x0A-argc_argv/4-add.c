#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - programs entry point
 * @argc: program arguement counter
 * @argv: program argument vector
 * Return: 0 if no number is passed to the program, if one of the number
 * contains a symbol, print Error and return 1.
 */
int main(int argc, char *argv[])
{
	int i, j, num = 0, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(argv[i]);

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}

		result += num;
	}

	printf("%d\n", result);
	return (0);
}
