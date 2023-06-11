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

 /* Find last occurrence of the directory separator ("/") in program name */
	const char *lastSlash = strrchr(programName, '/');

  /* If directory separator is found, move the pointer to the next character */
	if (lastSlash != NULL)
	{
		programName = lastSlash + 1;
	}

	printf("%s\n", programName);

	/* casting the argc to void to indicate it was unused intentionally*/
	(void)argc;

	return (0);
}
