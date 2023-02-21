/*Include main header file*/
#include "main.h"
/**
 * Main  - Entry point
 *
 * Return - A;lways 0
 *
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
