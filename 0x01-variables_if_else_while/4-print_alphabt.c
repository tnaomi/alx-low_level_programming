#include <stdio.h>
#include <string.h>


/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{

	char cha = 'a';

	while (cha <= 'z')
	{
		if (cha != 'q' && cha != 'e')
		{
			putchar(cha);
		}
		++cha;
	}

	putchar('\n');

	return (0);
}
