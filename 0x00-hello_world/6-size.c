#include <stdio.h>
/**
 * main - The program prints the size of various variable types
 * on the computer it is compiled and run on
 *
 * Return: 0 Always(success)
 */
int main(void)
{
	int A = sizeof(char);
	int B = sizeof(int);
	int C = sizeof(long int);
	int D = sizeof(long long int);
	int E = sizeof(float);

	printf("Size of a char: %lu byte(s)\n", (unsigned long)A);
	printf("Size of an int: %lu byte(s)\n", (unsigned long)B);
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)C);
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)D);
	printf("Size of a float: %lu byte(s)\n", (unsigned long)E);

	return (0);
}
