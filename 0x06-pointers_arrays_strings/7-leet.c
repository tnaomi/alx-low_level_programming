#include "main.h"

/**
 * leet - replace specific letters
 * @s: string
 * Return:upper case string
 */

char *leet(char *s)
{
int indx;

indx = 0;
while (*(s + indx))
{
if (*(s + indx) >= 'a' && *(s + indx) <= 'z')
*(s + indx) -= 'a' - 'A';
indx++;
}
return (s);
}

