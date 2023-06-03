#include <stdio.h>
#include "main.h"

/**
 * print_buffer - Prints the content of a buffer
 * @b: The buffer to print
 * @size: The size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;


	if (size <= 0)
	{
		printf("\n");
		return;
	}


	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x ", (unsigned char)b[j + 1]);
			else
				printf("   ");
			if (j % 2)
				putchar(' ');
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (b[i + j] > 31 && b[i + j] < 127)
					putchar(b[i + j]);
				else
					putchar('.');
			}
		}

		printf("\n");
	}
}
