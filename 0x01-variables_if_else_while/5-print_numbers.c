#include <stdio.h>

/**
 * main - prints a single digit number starting from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int single = 0;

	for (single = 0;
	single < 10;
	single++)
	{
		printf("%d", single);
	}

	printf('\n');

	return (0);
}
