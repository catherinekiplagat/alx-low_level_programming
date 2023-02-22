#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: shows alphabetic character
 * Return: 1 for letter uppercase or lowercase. 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
