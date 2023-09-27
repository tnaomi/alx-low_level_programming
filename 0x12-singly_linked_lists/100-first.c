#include <stdio.h>

/**
 * start_first - prints a string first before prog called
 * Return: void
*/

void start_first(void) __attribute__ ((constructor));

/**
 * start_first - prints a string before calling a function
 * Return: void
*/

void start_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
