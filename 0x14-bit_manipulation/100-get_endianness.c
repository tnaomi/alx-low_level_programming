#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 if BIG ENDIAN, 1 if LITTLE
 */

int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return ((int)*c);
}
