#include "main.h"


/**
 * main - print the letters of the alphabet
 *followed by a newline
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char letter;
	for (letter = 'a';
	letter <= 'z';
	letter++)
	{
		_putchar(letter);
	}

}

int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
