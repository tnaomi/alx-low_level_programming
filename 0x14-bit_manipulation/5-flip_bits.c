#include "main.h"

/**
 * flip_bits - Set bit to 0
 * @n: unsigned long int
 * @m: number to flip
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int len = 0;

	for (; (n || m);)
	{
		if ((n & 1) != (m & 1))

			len++;
		m >>= 1;
		n >>= 1;
	}
	return (len);
}
