#include "main.h"

/**
 * _print_rev_recursion - reverse puts(), recursive
 * @s: string to be printed
 * Return:s
 */

void _print_rev_recursion(char *s)
{


if (*s)
{

_print_rev_recursion(s + 1);
_putchar(*s);

}
else
{
_putchar('\n');
}

}
