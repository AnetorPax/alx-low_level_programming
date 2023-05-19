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

	printf("Size of a char: %d byte(s)\n", (int)A);
	printf("Size of an int: %d byte(s)\n", (int)B);
	printf("Size of a long int: %d bytes(s)\n", (int)C);
	printf("Size of a long long int: %d byte(s)\n", (int)D);
	printf("Size of a float: %d byte(s)\n", (int)E);

	return (0);
}
