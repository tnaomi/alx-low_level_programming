#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * in reverse, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{

	int cha;

	for (cha = 122;
	cha > 96;
	cha--)
	{
		putchar(cha);
	}
	putchar('\n');

	return (0);
}
