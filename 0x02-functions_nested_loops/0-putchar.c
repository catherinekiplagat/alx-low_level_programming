#include "main.h"

/**
 * main-program that prints _putchar
 * Description:prints _putchar
 *
 *Return: 0 when successful
 */
int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

		for (i = 0; i < 8; i++)
		{
			_putchar(text[i]);
		}
	_putchar('\n');
	return (0);
}
