#include <stdio.h>
#include <string.h>


/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{

	char cha;

	for (cha = 'a';
	cha <= 'z';
	cha++)
	{
		putchar(cha);
	}

	for (cha = 'A';
	cha <= 'Z';
	cha++)
	{
		putchar(cha);
	}
	putchar('\n');

	return (0);
}
