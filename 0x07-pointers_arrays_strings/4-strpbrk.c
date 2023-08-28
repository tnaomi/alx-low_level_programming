#include "main.h"

/**
 * _strpbrk - search a string for bytes
 * @s:string to be searched
 * @accept:char to be located
 * Return:first occurence of accept
 */

char *_strpbrk(char *s, char *accept)
{

int query;
while (*s)
{
for (query = 0; accept[query]; query++)
{
if (*s == accept[query])

return (s);

}
s++;
}

return (NULL);

}
