#include "main.h"

/**
 * create_file - Creates a new file
 *
 * @filename: Param description
 *
 * @txt: Param description
 *
 * Return: int
 */
int create_file(const char *filename, char *txt)
{
	int rts, len = 0, rtsWrite;

	rts = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (rts == -1)
		return (-1);

	if (txt == NULL)
	{
		txt = "";
	}

	while (txt[len] != '\0')
	{
		len++;
	}

	rtsWrite = write(rts, txt, len);

	if (rtsWrite == -1)
	{
		return (-1);
	}
	close(rts);
	return (1);
}
