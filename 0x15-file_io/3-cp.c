#include "main.h"

/**
 * main - Copies content of file to another
 *
 * @argc: int
 *
 * @argv: double pointer
 *
 * Return: Copy of file
 */

int main(int argc, char **argv)
{
	int abcd, abcd2, f_check;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	abcd = open(argv[1], O_RDONLY);
	if (abcd == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot read from file %s\n", argv[1]);
		exit(98);
	}
	abcd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (abcd2 == -1)
		dprintf(STDERR_FILENO, "Error: cannot write to %s\n", argv[2]), exit(99);
	while ((f_check = read(abcd, buffer, 1024)) > 0)
	{
		if (f_check == -1)
		{
			dprintf(STDERR_FILENO, "Error: cannot read from file %s\n", argv[1]);
			exit(98);
		}
		f_check = write(abcd2, buffer, f_check);
		if (f_check == -1)
		{
			dprintf(STDERR_FILENO, "Error: cannot write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (f_check == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(abcd) == -1)
		dprintf(STDERR_FILENO, "Error: cannot close abcd %d\n", abcd), exit(100);
	if (close(abcd2) == -1)
		dprintf(STDERR_FILENO, "Error: cannot close abcd %d\n", abcd2), exit(100);

	return (0);
}
