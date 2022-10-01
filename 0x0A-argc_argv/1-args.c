#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: Always 0 (successful)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
