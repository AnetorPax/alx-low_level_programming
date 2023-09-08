#include "main.h"

/**
 * check_arguments - Checks if command-line arguments are valid.
 * @argc: Number of arguments.
 *
 *
 * Return: 1 if valid, 0 if not.
 */
int check_arguments(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (0);
	}
	return (1);
}

/**
 * open_files - Opens source and destination files.
 * @file_from: Pointer to the source file descriptor.
 * @file_to: Pointer to the destination file descriptor.
 * @argv: Arguments vector.
 *
 * Return: 1 on success, exit with error codes on failure.
 */
int open_files(int *file_from, int *file_to, char *argv[])
{
	*file_from = open(argv[1], O_RDONLY);
	if (*file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (0);
	}

	*file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (*file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(*file_from);
		return (0);
	}

	return (1);
}

/**
 * copy_files - Copies content from source to destination.
 * @file_from: Source file descriptor.
 * @file_to: Destination file descriptor.
 *
 * Return: 1 on success, 0 on failure.
 */
int copy_files(int file_from, int file_to)
{
	ssize_t nchars, nwr;
	char buf[1024];

	while ((nchars = read(file_from, buf, 1024)) > 0)
	{
		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to destination file\n");
			close(file_from);
			return (0);
		}
	}

	if (nchars == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from source file\n");
		close(file_to);
		return (0);
	}

	return (1);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments.
 * @argv: Arguments vector.
 *
 * Return: 0 on success, exit with error codes on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (!check_arguments(argc))
		exit(97);

	if (!open_files(&file_from, &file_to, argv))
		exit(98);

	if (!copy_files(file_from, file_to))
		exit(99);

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close source file\n");
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close destination file\n");
		exit(100);
	}

	return (0);
}
