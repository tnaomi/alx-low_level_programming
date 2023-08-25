#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return:char
 */

char *_strcat(char *dest, char *src)
{

char *str = dest;
for (; *dest != '\0';)
{
dest++;

}
for (;*src != '\0';)
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return (str);
}
