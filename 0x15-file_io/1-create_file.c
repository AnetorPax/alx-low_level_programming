#include "main.h"

/**
 * create_file - Creates a file with specified permissions and content.
 * @filename: The name of the file to be created.
 * @text_content: Content to be placed in the created file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fild = 0, chk = 0, i = 0;

	if (!filename)
		return (-1);

	fild = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fild < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		chk = write(fild, text_content, i);
		if (chk < 0)
		{
			close(fild);
			return (-1);
		}
	}

	close(fild);
	return (1);
}
