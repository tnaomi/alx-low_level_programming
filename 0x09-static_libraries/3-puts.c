#include "main.h"
/**
*  _puts - prints string
*  @str: pointer to input string
*  Return: string
*/

void _puts(char *str)

{

int count;

for (count = 0; count <= *str; str++)
{
_putchar(*str);
count++;
}

_putchar('\n');

}
