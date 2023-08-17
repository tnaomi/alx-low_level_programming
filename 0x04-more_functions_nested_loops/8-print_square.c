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
_putchar('#');
}
_putchar('\n');

}
