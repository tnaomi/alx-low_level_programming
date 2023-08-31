#include "main.h"

/**
 * factorial - find factorial of n
 * if n -ve, error
 * @n: number
 * Return:s
 */


int factorial(int n)
{

if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
putchar('\n');
}
