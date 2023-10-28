#include "main.h"
/**
 * _putchar - Write a single character to STDOUT
 * @c: Input character
 * Return: Character
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
/**
 * _isnum - Verifies if given string has digits only
 * @str: Input string
 * Return: 0 if number, 1 if not
 */
int _isnum(const char *str)
{
	int ver = 0;

	for (; *str; str++)
	{
		if ((*str < 48) || (*str > 57))
			ver += 1;
	}
	return (ver);
}
