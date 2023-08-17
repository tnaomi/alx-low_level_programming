#include "main.h"

/**
 * more_numbers - prints from 0 to 14, on 10 lines
 * Return:Nothing. It's a void function
 */

void more_numbers(void)

{

int number;

int counter = 0;


for (number = 0;
number < 10;
number++)
{
for (counter = 0;
counter < 15;
counter++)
{
if (counter > 9)
{
_putchar('1');
_putchar(counter % 10 + '0');
}
}
}

_putchar ('\n');

}
