#include "main.h"

/**
 * _check_prime - find if number is prime
 * @control: 1
 * @number: equal to n
 * Return: integer
 */
int _check_prime(int control, int number)
{
int mod = number % 10;
if (number == 2)
return (1);
if (control * control == number || mod % 2 == 0)
return (0);
if (control * control > number)
return (1);
return (_check_prime(control + 1, number));
}

/**
 * is_prime_number - verifies prime
 * @n: number
 * Return: integer
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
else
return (_check_prime(2, n));
}
