#include "main.h"

/**
 * binary_to_uint - convert binary to uint
 * @b: pointer to binary string
 * Return: Number/ 0 if NULL/ non-binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b == '0')
			num <<= 1;
		else if (*b == '1')
			num = (num << 1) | 1;
		else
			return (0);
	}

	return (num);
}
