#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	for (m = 0; m < 100; m++)
	{
		putchar((m / 10) + '0');
		putchar((m % 10) + '0');
		if (m != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
