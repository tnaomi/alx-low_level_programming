#include "main.h"

/**
 * print_last_digit - finds the last integer of n,
 * @n : the variable to be checked
 * Return : value of the last digit
 */

int print_last_digit(int n)
{

	int mod;

	mod = n % 10;
	if (mod < 0)
	{
		mod = mod * -1;
	}

	_putchar(mod + '0');
	return (mod);

}
