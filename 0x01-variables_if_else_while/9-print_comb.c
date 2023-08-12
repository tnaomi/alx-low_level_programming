#include <stdio.h>

/**
 * main - prints a combination of characters
*using 4 putchars only
 * Return: Always 0 (Success)
 */

int main(void)
{
	int combi;
	int comma = 44;
	int space = 32;

	for (combi = 48;
	combi < 58;
	combi++)
	{
		putchar(combi);
		if (combi != 57)
		{
			putchar(comma);
			putchar(space);
		}
		else
		{
			putchar('$');
		}
	}
	putchar('\n');

	return (0);
}
