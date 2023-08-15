#include "main.h"

/**
 * print_alphabet_x10 - print the letters of the alphabet
 *ten times
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int times;

	char beta;

	for (times = 0;
	times <10;
	times++)
	{
		for (beta = 'a';
		beta <= 'z';
		beta++)
		{
			_putchar(beta);
		}
		_putchar('\n');
	}

}
