#include <stdio.h>
/**
 * main-program that prints all single digit numbers of base 10 from 0
 * Return: 0 when successful
 */
int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
		return (0);
}
