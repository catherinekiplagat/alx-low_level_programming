#include <stdio.h>
/**
 * main-program that prints all the numbers of base 16 in lowercase
 * Return: 0 when successful
 */
int main(void)
{
	int a = '0';
	char b = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
