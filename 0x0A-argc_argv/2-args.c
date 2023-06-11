#include <stdio.h>
#include <string.h>
/**
 * main - Entry poin to the program
 * @argc: arguement counter
 * @argv: argument vector
 * Return: 0 Always Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
