#include <stdio.h>
/**
 * main - The program prints the size of various types on the computer
 * it is compiled and run on
 *
 * Return: 0
 */
int main(void)
{
	char C = sizeof(char);
	int I = sizeof(int);
	double LI = sizeof(long int);
	double LLI = sizeof(long long int);
	float F = sizeof(float);

	printf("size of a char: %lu byte(s)\n", (unsigned long)C);
	printf("size of an int: %lu byte(s)\n", (unsigned long)I);
	printf("size of a long int: %lu byte(s)\n", (unsigned long)LI);
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)LLI);
	printf("size of a float: %lu byte(s)\n", (unsigned long)F);
	return (0);
}
