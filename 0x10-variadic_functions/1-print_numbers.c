#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers -print input numbers with separator
 * @separator: the chosen separator
 * @n: number of integers passed to the function
 * Return: NULL, void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int indx;
	va_list number;

	va_start(number, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (indx = 0; indx < n; indx++)
	{
		printf("%d", va_arg(number, int));
		if (indx != (n - 1))
		{
			printf("%s", separator);
		}
	}
	_putchar('\n');
	va_end(number);

}
