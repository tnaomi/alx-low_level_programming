#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: String 'Name' to be printed
 * @f: Pointer to a input function
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
