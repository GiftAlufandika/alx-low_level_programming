#include "main.h"
/**
 * 0-binary_to_uint.c converts a binary number to an unsigned int
 * @b: binary valiable
 * Return: return an unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	 int index = 0, result = 0;


	if (!b)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}

		result <<= 1;

		if (b[index] & 1)
		{
			result += 1;
		}
		index += 1;
	}
	return (result);
}
