#include <stdio.h>
/**
 * main-program that prints combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int i = '0';

	while (i < 10)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
