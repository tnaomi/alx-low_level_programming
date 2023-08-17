#include "main.h"

/**
 * print_square - prints # diagonally 'size' times
 * @size : the number of times to print #
 *  Return:Nothing. It's a void function
 */

void print_square(int size)

{

int number;

int number2;

if (size <= 0)
_putchar('\n');
for (number = 0;
number < size;
number++)
{
for (number2 = 0;
number2 < number;
number2++)
{
_putchar('#');
}
}
_putchar('\n');

}
