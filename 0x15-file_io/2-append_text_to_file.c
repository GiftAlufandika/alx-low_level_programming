#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: Const char pointer
 *
 * @txt: Char pointer
 *
 * Return: int
 */


int append_text_to_file(const char *filename, char *txt)
{
	int _Open, _Write, length = 0;

	if (filename == NULL)
		return (-1);

	_Open = open(filename, O_WRONLY | O_APPEND);

	if (_Open == -1)
	{
		return (-1);
	}

	if (txt == NULL)
		txt = "";

	while (txt[length] != '\0')
	{
		length++;
	}

	_Write = write(_Open, txt, length);

	if (_Write == -1)
		return (-1);

	close(_Open);

	return (1);
}
