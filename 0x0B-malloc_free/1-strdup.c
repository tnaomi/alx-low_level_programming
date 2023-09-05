#include "main.h"

/**
* _strdup - duplicate an array of chars,
* @str: input string
* Return: NULL / Ptr
*/

char *_strdup(char *str)
{

char *copy;
unsigned int len = 0, index = 0;
for (; *str++;)
len++;

copy =  malloc((len + 1));

if (str == NULL || len == 0 || copy == NULL)
{
return (NULL);
}
else
{
for (; index < len; index++)
{
copy[index] = str[index];
}
copy[len] = '\0';
printf("%s\n", copy);
}
return (copy);
}
