#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: 'A program using neither printf() nor puts()'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i=1;
	char str1[65]= "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	for (i=1; i<=65; i++);
		putchar(str1[i]);
	return (1);
}
