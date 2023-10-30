#include "main.h"

/**
 * _putchar - Print a single character to stdout
 * @c: character
 * Return: CHaracter
 */

int _putchar(char c)
{

	return (write(STDOUT_FILENO, &c, 1));
}
