#include "main.h"

/**
 * print_bin - prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

