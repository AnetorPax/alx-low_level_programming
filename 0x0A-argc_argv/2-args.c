#include<stdio.h>
/**
 * main - prints all arguements it recieves
 * @argc: number of arguements
 * @argv: array of arguememts
 * Return: Always(successful)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
