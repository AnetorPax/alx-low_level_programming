#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting point of the program
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Always Success
 */
int main(int argc, char *argv[])
{
	int bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (1);
	}

	unsigned char *ptr = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
		printf("%02x ", ptr[i]);

	printf("\n");
	return (0);
}
