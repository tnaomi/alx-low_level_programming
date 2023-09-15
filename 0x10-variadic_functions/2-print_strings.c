#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings -print input numbers with separator
 * @separator: the chosen separator
 * @n: number of strings passed to the function
 * Return: NULL, void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int indx;
	char *str;
	va_list string;

	va_start(string, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (indx = 0; indx < n; indx++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (indx < (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(string);

}
