#include<stdio.h>
#include"main.h"
/**
 * binary_to_unit - a function that convets bit to unsigned int
 *
 *@b - string to convert
 *
 * Return - return converted number or 0
 * 
 */
 unsigned int binary_to_uint(const char *b)
 {
 	unsigned int num = 0;
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			num = (num << 1) | 1;
		}
		else if ( b[i] == '0')
		{
			num <<= 1;
		}
		else
		{
			return (0);
		}
	}
	return num;
 }
