#include "main.h"

/**
 * print_most__numbers - prints from 0 to 9,
 * except 2 and 4, followed by a new line
 * Return:Nothing. It's a void function
 */

void print_most_numbers(void)

{

int number;

for (number = 48;
number < 58;
number++)
{
	if (!(number == 50 || number == 52))
	{
		_putchar(number);
	}
}
_putchar ('\n');

}
