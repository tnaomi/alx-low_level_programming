#include "main.h"

/**
 * print_numbers - prints from 0 to 9,
 * followed by a new line
 * Return: Always 0
 */

void print_numbers(void)

{

int number;

for (number = 48;
number < 58;
number++)
{
	_putchar(number);
}
_putchar ('\n');

}
