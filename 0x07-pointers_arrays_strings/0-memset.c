#include "main.h"

/**
 * _memset - concat 2 string
 * @s:string to be modified
 * @b:char to be replaced in s
 * @n : times to repeat b
 * Return:pointer
 */


char *_memset(char *s, char b, unsigned int n)

{

char *str = s;
unsigned int indx = 0;

while (indx < n)
{
*(str + indx) = b;
indx++;
}
return (str);
}
