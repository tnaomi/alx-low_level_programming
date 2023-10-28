#include "main.h"

/**
 * set_bit - convert number to binary
 * @n: pointer to unsigned long int
 * @index: position of bit
 * Return: 1 if SUCCESS or -1 if ERROR
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (n == NULL || index > 63)
	{
		return (-1);
	}

	*n |= (1 << index);

	return (1);
}
