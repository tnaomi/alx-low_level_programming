#include "3-calc.h"

/**
 * op_add - Add two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two integers
 * @a: first integer
 * @b: second integer
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two integers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two integers
 * @a: first integer
 * @b: second integer
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Undefined Behaviour\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Divide two integers
 * @a: first integer
 * @b: second integer
 * Return: modulo of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Undefined Behaviour\n");
		exit(100);
	}
	return (a % b);
}
