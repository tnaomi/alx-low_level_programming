#include "main.h"

/**
 * print_square - prints # diagonally n times
 * @n : the number of times to print #
 *  Return:Nothing. It's a void function
 */

void print_square(int n)

{

int number;

if (n <= 0)
_putchar('\n');
for (number = 0; number < n; number++)
{
_putchar('#');
}
_putchar('\n');

}
