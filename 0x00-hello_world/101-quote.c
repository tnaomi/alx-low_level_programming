#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: 'A program using neither printf() nor puts()'
 * Return: Always 0 (Success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
