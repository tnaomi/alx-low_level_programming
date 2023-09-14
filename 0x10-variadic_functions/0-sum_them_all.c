#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums a variable number of integers
 * @n : the first named variable in the list
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{

	int sum = 0;
	unsigned int indx;
	va_list pntr;

	va_start(pntr, n);
	if (n == 0)
	{
	return (0);
	}

	for (indx = 0; indx < n; indx++)
	{
	sum += va_arg(pntr, int);
	}
	va_end(pntr);

	return (sum);
}
