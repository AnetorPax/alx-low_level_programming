#include "main.h"
/**
 * print_buffer - Prints a buffer
 * @b: pointer to the buffer to be examined
 * @size: number of byte of b
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("/n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf(" ");

			if (j % 2 == 1)
				printf(" ");
		}

		printf(" ");

		for (j = 0; j < 10; j++)
		{
			if (i + j >= size)
				break;
			if (b[i + j] >= 32 && b[i + j] <= 126)
				printf("%c", b[i + j]);
			else
				printf(".");
		}
		printf("\n");
	}
}
