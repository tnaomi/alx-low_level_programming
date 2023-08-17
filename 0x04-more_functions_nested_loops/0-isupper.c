#include <stdio.h>

/**
 * _isupper - check if letter  upper/lower
 * @c : the variable to be compared
 * Return: 1 if uppercase, 0 if lowercase
 */

int _isupper(int c)
{
	if (c <= 90)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
