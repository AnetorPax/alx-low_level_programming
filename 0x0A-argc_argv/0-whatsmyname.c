#include <stdio.h>
#include <string.h>
/**
 * main - entry point of the program
 * @argc: The argument counter
 * @argv: argument vector
 * Return: 0 Always successful
 */
int main(int argc, char *argv[])
{
	/* Extract the program name from argv[0] */
	const char *programName = argv[0];


	printf("%s\n", programName);

	/* casting the argc to void to indicate it was unused intentionally*/
	(void)argc;

	return (0);
}
