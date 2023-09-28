#include "main.h"

/**
 * clear_bit - Set bit to 0
 * @n: pointer to unsigned long int
 * @index: position of bit
 * Return: 1 if SUCCESS or -1 if ERROR
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (n == NULL || index > 63)
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
