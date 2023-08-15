#include "main.h"

/**
 * print_last_digit - finds the last integer of n,
 * @n : the variable to be checked
 * Return : the value of the last digit
 */

int print_last_digit(int n)
{

	int mod;

	mod = n % 10;
	if (mod < 0)
	{
		return (-1 * mod);
	}

	return (mod);

}
