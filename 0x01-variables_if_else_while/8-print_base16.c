#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * in reverse, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{

	int hx;

	for (hx = 48;
	hx < 58;
	hx++)
	{
		putchar(hx);
	}

	for (hx = 97;
	hx < 103;
	hx++)
	{
		putchar(hx);
	}
	putchar('\n');

	return (0);
}
