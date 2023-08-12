#include <stdio.h>

/**
 * main - prints a single digit number starting from 0
*using putcahr only
 * Return: Always 0 (Success)
 */

int main(void)
{
	int single;

	for (single = 48;
	single < 58;
	single++)
	{
		putchar(single);
	}

	putchar('\n');

	return (0);
}
