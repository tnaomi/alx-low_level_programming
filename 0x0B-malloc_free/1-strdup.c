#include "main.h"

/**
* _strdup - duplicate an array of chars,
* @str: input string
* Return: NULL / Ptr
*/

char *_strdup(char *str)
{

char* copy, *copyptr;
unsigned int len= 0;
for (; *str++;)
len++;

copy = (char*) malloc((len + 1));

copyptr = copy;

if (str == NULL || len == 0 || copyptr == NULL)
{
return (NULL);
}
else
{
for (;*str++;)
{
*copyptr++ = *str++;
}
*copyptr = '\0';
printf("%s\n", copy);
}
return (copy);
}
