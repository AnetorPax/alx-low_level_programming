#include "main.h"

/**
 * read_textfile - Reads text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read from.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print, 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fild;
	char *buffer;
	ssize_t total_letters_read = 0, bytes_read = 0, bytes_written = 0;

	if (!filename)
		return (0);
	fild = open(filename, O_RDONLY);
	if (fild == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fild);
		return (0);
	}
	bytes_read = read(fild, buffer, letters);
	if (bytes_read > 0)
	{
		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fild);
			free(buffer);
			return (0);
		}

		total_letters_read += bytes_written;
	}

	close(fild);
	free(buffer);

	if (bytes_read == -1)
		return (0);

	return (total_letters_read);
}
