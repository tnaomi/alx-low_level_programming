#include "main.h"

/**
 * _memcpy - copy char to string
 * @dest:string to be modified
 * @src:chars to copy
 * @n: copy up to src[n]
 * Return:pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{

char *str = dest;
unsigned int indx = 0;
char store;
unsigned int srcindx;

while (srcindx < n)
{
store = src[srcindx];
*(str + indx) = store;
indx++;
srcindx++;

}

return (str);


}
