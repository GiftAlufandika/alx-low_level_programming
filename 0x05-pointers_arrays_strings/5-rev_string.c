#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
char *rev_string(char *s)
{
       	char ch, *p, *q;
       
	for (q = s; *q != '\0'; ++q)
		;
	if (q > s)
		--q;
	for (p = s; p < q; ++p, --q)
	{
		ch = *p;
		*p = *q;
		*q = ch;
	}
	return s;
}
