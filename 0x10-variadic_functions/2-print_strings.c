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
	va_list string;

	va_start(string, n);
	if (separator != NULL)
	{
		for (indx = 0; indx < n; indx++)
		{
			if (indx != (n - 1))
			{
				if (string == NULL)
					printf("(nil)\n");
				else
				{
					printf("%s", va_arg(string, char *));
					printf("%s", separator);
				}
			}
			else
			{
				printf("%s", va_arg(string, char *));
			}
		}
	putchar('\n');
	va_end(string);
}

}
