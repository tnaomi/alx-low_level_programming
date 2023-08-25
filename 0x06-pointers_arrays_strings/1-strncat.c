#include "main.h"

/**
 * _strncat - concatenate 2 strings up to n bytes
 * @dest:destination string
 * @src:source string
 * @n : number of times
 * Return:char
 */

char *_strncat(char *dest, char *src, int n)
{

char *str = dest;
int up_to;
int indx = 0;


for (; dest[indx] != '\0'; indx++)
{
continue;
}
str = dest;
for (up_to = 0; src[up_to] != '\0' && up_to < n;)
{

dest[indx + up_to] = src[up_to];
up_to++;

}
dest[indx + up_to] = '\0';

return (str);
}
