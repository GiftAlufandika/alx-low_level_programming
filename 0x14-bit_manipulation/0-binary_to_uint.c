#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * @b: string to convert.
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number, j;

	if (!b || !*b)
	{
		return (0);
	}

	number = 0;
	j = 0;

	do
	{
		if (b[j] > 49)
		{
			return (0);
		}
		else if (b[j] == 49)
		{
			number <<= 1;
			number = number + 1;
		}
		else
		{
			number <<= 1;
		}
		j++;
	}
	while (b[j]);

	return (number);
}

