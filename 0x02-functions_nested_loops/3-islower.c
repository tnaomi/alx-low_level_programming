#include "main.h"

/**
 * _islower - checks whether 'c' is lowercase,
 * returns '1'-lowercase, '0'-uppercase
 */

int _islower(int c)
{
	int a = 97;

	if (c >= a)
	{
		_putchar('1');
	}

	else
	{
		_putchar('0');
	}

	return (0);
}
