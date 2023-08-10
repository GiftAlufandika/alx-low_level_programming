#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_file, read_file, write_file;
	char *bf;

	if (filename == NULL)
	{
		return (0);
	}

	bf = malloc(sizeof(char) * letters);
	if (bf == NULL)
	{
		return (0);
	}	
	open_file = open(filename, O_RDONLY);
	read_file = read(open_file, bf, letters);
	write_file = write(STDOUT_FILENO, bf, read_file);

	if (open_file == -1 || read_file == -1 || write_file == -1 || write_file != read_file)
	{
		free(bf);
		return (0);
	}

	free(bf);
	close(open_file);

	return (write_file);
}

