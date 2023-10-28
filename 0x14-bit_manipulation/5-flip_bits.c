#include "main.h"

/**
 * flip_bits - number of bits req to flip from src to input
 * @n: unsigned long int
 * @m: number to flip
 * Return: number of bits
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
