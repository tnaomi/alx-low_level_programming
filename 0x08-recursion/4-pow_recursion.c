#include "main.h"

/**
 * _pow_recursion - find x raised to y,
 * if y -ve, error
 * @x: number
 * @y: power
 * Return: integer
 */


int _pow_recursion(int x, int y)
{

if (y < 0)
{
return (-1);
}
else if (y == 0 || x == 1)
{
return (1);
}
else if (y == 1)
{
return (x);
}
else
{

return(x * _pow_recursion(x, y - 1));

}
putchar('\n');

}
