/*Include main header file*/
#include "main.h"
/**
 * Main - Prints _putchar followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char *text = "_putchar";

	while (*text)
	{
		_putchar(*text);
		text++;
	}
	_putchar('\n');
	return (0);
}
