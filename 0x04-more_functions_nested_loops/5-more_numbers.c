#include "main.h"

/**
 * more_numbers - prints from 0 to 14, on 10 lines
 * Return:Nothing. It's a void function
 */

void more_numbers(void)

{

int number;

int counter = 0;

while (counter < 10)
{
for (number = 48;
number < 58;
number++)
{
_putchar(number);
}
_putchar('\n');
counter++;
}
_putchar ('\n');

}
