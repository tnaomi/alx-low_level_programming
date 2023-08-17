#include "main.h"

/**
 * print_line - prints character _ for n times
 * @n : the number of times to print _
 *  Return:Nothing. It's a void function
 */

void print_line(int n)

{

int number;

for (number = 0; number < n; number++)
{
_putchar('_');
}
_putchar('\n');

}
