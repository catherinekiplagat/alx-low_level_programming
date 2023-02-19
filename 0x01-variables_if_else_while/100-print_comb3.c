#include <stdio.h>
#include <stdlib.h>
/**
 * main-a program that prints all combinations of two digits
 * Return: 0 when successful
 */
int main(void)
{
	int c;
	int d;

	for (c = 0; c <= 8; c++)
	{
		for (d = c + 1; d <= 9; d++)
		{
			putchar(c + '0');
			putchar(d + '0');
			if (c < 8 || d < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
