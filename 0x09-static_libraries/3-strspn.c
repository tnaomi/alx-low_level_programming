#include "main.h"

/**
 * _strspn - locate a char in string
 * @s:string to be searched
 * @accept:char to be located
 * Return:first occurence of c
 */

unsigned int _strspn(char *s, char *accept)
{

int z = 0, x, y;

for (x = 0; s[x] != '\0'; x++)
{
if (s[x] != 32)
{
for (y = 0; accept[y] != '\0'; y++)
{
if (s[x] == accept[y])
z++;
}
}
else

return (z);

}

return (z);

}
