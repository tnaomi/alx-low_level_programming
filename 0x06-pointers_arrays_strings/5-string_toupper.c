#include "main.h"

/**
 * string_toupper - change lower to upper
 * @s: string
 * Return:upper case string
 */

char *string_toupper(char *s)
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
