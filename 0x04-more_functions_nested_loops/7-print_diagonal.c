#include "main.h"

/**
 * print_diagonal - prints \ diagonally n times
 * @n : the number of times to print \
 *  Return:Nothing. It's a void function
 */

void print_diagonal(int n)

{

int number, counter;

if (n <= 0)
_putchar('\n');
for (number = 0; number < n; number++)
{
for (counter = 0; counter < number; counter++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}

}
