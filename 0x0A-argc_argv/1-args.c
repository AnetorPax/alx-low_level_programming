#include <stdio.h>
#include <string.h>
/**
 * main - Entry point to the prgram
 * @argc: argument 1
 * @argv: argument vector
 * Return: 0 Always success
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
