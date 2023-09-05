#include "main.h"

/**
 * read_textfile - reads a text file and prints it.
 *
 * @file: const char type pointer to file to be read
 *
 * @chars: size_t type
 *
 * Return: 0
 */

ssize_t read_textfile(const char *file, size_t chars)
{
	int rts;
	ssize_t rtsRead, rtsWrite, rtsClose;
	char *buf;

	if (file == NULL)
		return (0);

	buf = malloc(sizeof(char) * chars);

	if (buf == NULL)
		return (-1);

	rts = open(file, O_RDONLY);

	if (rts == -1)
		return (0);

	rtsRead = read(rts, buf, chars);

	if (rtsRead == -1)
		return (-1);

	rtsWrite = write(STDOUT_FILENO, buf, rtsRead);

	if (rtsWrite == -1)
		return (-1);
	rtsClose = close(rts);

	if (rtsClose == -1)
		return (-1);

	return (rtsRead);
}
