#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Print all of the input arguments
 * @format: specifies the particular input format
 * Return: Nothing. Void
 */

void print_all(const char * const format, ...)
{
	int indx;
	int status;
	char *str;
	va_list input;

	va_start(input, format);
	indx = 0;
	while (format != NULL && format[indx] != '\0')
	{
		switch (format[indx])
		{
			case 'c':
				printf("%c", va_arg(input, int));
				status = 0;
				break;
			case 'i':
				printf("%i", va_arg(input, int));
				status = 0;
				break;
			case 'f':
				printf("%f", va_arg(input, double));
				status = 0;
				break;
			case 's':
				str = va_arg(input, char*);
				if (str == NULL)
					str = "(nil)";
					printf("%s", str);
					status = 0;
				break;
			default:
				status = 1;
				break;
		}
		if (format[indx + 1] != '\0' && status == 0)
		printf(", ");
		indx++;
	}
	printf("\n");
	va_end(input);
}
