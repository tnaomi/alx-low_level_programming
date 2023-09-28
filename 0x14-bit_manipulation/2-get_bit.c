#include "main.h"

/**
 * get_bit - convert number to binary
 * @n: unsigned long int
 * @index: position of bit
 * Return: binary number
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == 0 && index < 64)
	{
		return (0);
	}

	for (; i < 64; n >>= 1, i++)
	{
		if (i == index)
			return (n & 1);
	}

	return (-1);
}
