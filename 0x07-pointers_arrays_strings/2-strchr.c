#include "main.h"

/**
 * _strchr - locate a char in string
 * @s:string to be searched
 * @c:char to be located
 * Return:first occurence of c
 */

char *_strchr(char *s, char c)
{

char *str = s;
/*
*to find the length of the string first
*/
/*
*loop to find first occurrence
*/

while (*str)
{
if (*str != c)
s++;
else
return (s);
}
if (c == '\0')
return (s);

return (NULL);

}
