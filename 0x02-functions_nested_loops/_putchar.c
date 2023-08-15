#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @letter : the character that's passed
 * Return: On success 1.
 */
int _putchar(char letter)
{
	return (write(1,&letter, 1));
}
