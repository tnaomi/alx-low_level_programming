#include "main.h"

/**
 * main - print the letters of the alphabet
 *followed by a newline
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a';
	alpha <= 'z';
	alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
