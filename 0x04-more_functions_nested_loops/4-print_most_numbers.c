#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9 excluding
 * 2 & 4
 * Return: 0 when successful
 */
void print_most_numbers(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
