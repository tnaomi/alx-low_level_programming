#include "main.h"

/**
 * get_bit - convert number to binary
 * @n: unsigned long int
 * @index: position of bit
 * Return: binary number
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;

	if (n == 0 && index < 64)
	{
		return (0);
	}

	for (; count < 64; n >>= 1, count++)
	{
		if (count == index)
			return (n & 1);
	}

	return (-1);
}
