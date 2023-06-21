#include "3-calc.h"
/**
 * main - performs simple arithmetic operations
 * @argc: argument counter
 * @argv: Argument vector
 * Return: 0 Always Success
 * Author: AnetorPAx
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char op;
	int (*funct)(int, int);

	funct = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	op = *argv[2];
	arg2 = atoi(argv[3]);

	if (!funct)
	{
		printf("Error\n");
		exit(99);
	}

	if ((op == '/' || op == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = funct(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
