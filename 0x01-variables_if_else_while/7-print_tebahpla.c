#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * in reverse, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{

	char cha;

	for (cha = 'z';
	cha <= 'a';
	cha--)
	{
		putchar(cha);
	}
	putchar('\n');

	return (0);
}
