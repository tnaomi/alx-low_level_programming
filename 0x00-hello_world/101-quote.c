#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: 'A program using neither printf() nor puts()'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s1[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, s1, 59);

	return (1);
}
