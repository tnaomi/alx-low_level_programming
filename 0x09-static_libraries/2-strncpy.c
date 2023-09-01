#include "main.h"

/**
 * _strncpy - concatenate 2 strings up to n bytes
 * @dest:destination string
 * @src:source string
 * @n : bytes up to which to copy the string
 * Return:string
 */

char *_strncpy(char *dest, char *src, int n)
{

char *str = dest;
int up_to;
int indx = 0;

for (up_to = 0; src[up_to] != '\0' && up_to < n;)
{

dest[indx] = src[up_to];
up_to++;
indx++;

}
for (; up_to < n;)
{
dest[up_to] = '\0';
up_to++;
}


return (str);

}
