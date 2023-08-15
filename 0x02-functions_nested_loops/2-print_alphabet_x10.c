#include "main.h"

/**
 * print_alphabet_x10 - print the letters of the alphabet
 *followed by a newline
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int times;

	char alpha;

	for (times = 0;
	times <10;
	times++)
	{
		for (alpha = 'a';
		alpha <= 'z';
		alpha++)
		{
			_putchar(alpha);
		}

	}

	_putchar('\n');

}
