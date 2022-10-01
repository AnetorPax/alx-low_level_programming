#include <stdio.h>
#include "main.h"
/**
 * main -Prints the name of the program
 * @argc: number the arguments
 * @argv: array of arguments
 * Return: Always(successful)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
