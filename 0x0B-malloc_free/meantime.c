#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concantenate strings
 * @s1: destination
 * @s2: source
 * Return: NULL / Ptr
 */

char *str_concat(char *s1, char *s2)
{

char *ptr;
unsigned int len, len2, index, index2;

for (len = 0; *s1 != '\0'; s1++)
{
len++;
}
for (len2 = 0; *s2 != '\0'; s2++)
{
len2++;
}

ptr =  malloc(len + len2 + 1);
if (ptr == NULL)
{
return (NULL);
}

for (index = 0; index < len;)
{
ptr[index] = s1[index];
index++;
}

for (index2 = 0; index2 < len2;)
{
ptr[index] = s2[index2];
index++;
index2++;
}
ptr[index] = '\0';


return (ptr);

}
