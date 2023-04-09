#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: pointer to the name of the file.
 * @text_content:  pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int open_f, write_f, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}

	open_f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_f = write(op, text_content, length);

	if (open_f == -1 || write_f == -1)
		return (-1);

	close(open_f);

	return (1);
}
