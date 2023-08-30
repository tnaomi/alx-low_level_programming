#include "main.h"


/**
 * _puts_recursion - puts() but recursive
 * @s: char to be printed
 * Return:s
 */


void _puts_recursion(char *s)
{

if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
