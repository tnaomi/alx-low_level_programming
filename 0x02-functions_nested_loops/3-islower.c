#include "main.h"

/**
 * _islower - checks whether 'c' is lowercase,
 *@c - the variable to be checked
 * 1 - c - lowercase, 0 - c - uppercase
 */

int _islower(int c)
{
	int a = 97;

	if (c >= a)
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
