#include "main.h"

/**
 * _sqrt - find natural square root,
 * AKA perfect squre (helper fxn)
 * @control: 1
 * @number: equal to n
 * Return: -1 if n has no sqrt
 */
int _sqrt(int control, int number)
{

if (control * control == number)
{
return (control);
}
if (control * control > number)
{
return (-1);
}
return (_sqrt(control + 1, number));

}
/**
* _sqrt_recursion - find natural square root,
* @n: number
* Return: sqrt
*/


int _sqrt_recursion(int n)
{

if (n == 0)
{
return (0);
}
else
{
return (_sqrt(1, n));
}

}
