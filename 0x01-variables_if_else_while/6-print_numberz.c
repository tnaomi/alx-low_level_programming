#include <stdio.h>

/**
 * main - prints a single digit number starting from 0
*using putcahr only
 * Return: Always 0 (Success)
 */

int main(void)
{
	int single = 0;

	for (single = 0;
	single < 10;
	single++)
	{
		putchar(single);
	}

	putchar('\n');

	return (0);
}
