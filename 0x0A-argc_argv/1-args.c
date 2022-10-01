#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: number of arguements
 * @argv: array of arguements 
 * Return: Always (successful)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}

	printf("\n");
}
