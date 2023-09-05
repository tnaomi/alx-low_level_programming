#include "main.h"

/**
* _strdup - duplicate an array of chars,
* @str: input string
* Return: NULL / Ptr
*/

char *_strdup(char *str)
{

char *copy;
unsigned int len = 0;
for (; *str++;)
len++;

copy =  malloc((len + 1));

if (str == NULL || len == 0 || copy == NULL)
{
return (NULL);
}
else
{
for (; *str++;)
{
*copy++ = *str++;
}
*copy = '\0';
printf("%s\n", copy);
}
return (copy);
}
