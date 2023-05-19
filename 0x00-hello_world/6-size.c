#include <stdio.h>
/**
 * main - The program prints the size of various variable types
 * on the computer it is compiled and run on
 *
 * Return: 0
 */
int main(void)
{
	int A = sizeof(char);
	int B = sizeof(int);
	int C = sizeof(long int);
	int D = sizeof(long long int);
	int E = sizeof(float);

	printf("size of a char: %lu byte(s)\n", (unsigned long)A);
	printf("size of an int: %lu byte(s)\n", (unsigned long)B);
	printf("size of a long int: %lu bytes(s)\n", (unsigned long)C);
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)D);
	printf("size of a float: %lu byte(s)\n", (unsigned long)E);

	return (0);
}
