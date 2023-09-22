#include <stdio.h>

/**
 * start_first - prints a string first before prog called
 * Return: void
*/

void start_first(void) __attribute__ ((constructor))

void start_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
