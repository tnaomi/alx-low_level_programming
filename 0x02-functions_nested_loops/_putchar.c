/*#include <unistd.h>*/
#include <stdio.h>

/**
 * _putchar - writes the character letter to stdout
 * @letter : the character that's passed
 * Return: On success 1.
 */
int _putchar(char letter)
{
	putchar(letter);
	/*return (write(1,&letter, 1));*/
}
