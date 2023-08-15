#include <stdio.h>
#include "main.h"

/**
* main - The function puts out 'putchar'
*without usin built-in functions
*other than putchar.
* Return : Always 0 (Success)
*/

int main(void)
{
	int chars[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int index;

	for (index = 0;
	index <= 7;
	index++)
	{
		putchar(chars[index]);
	}

	putchar('\n');

	return (0);
}
