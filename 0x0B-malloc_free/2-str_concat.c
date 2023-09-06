#include "main.h"

/**
 * *str_concat - concantenate strings
 * @s1: destination
 * @s2: source
 * Return: NULL / Ptr
 */

char *str_concat(char *s1, char *s2)
{

char* ptr = s1;
unsigned int len, len2, index;

for (len = 0; *s1 != '\0'; s1++)
{
len++;
}
for (len2 = 0; *s2 != '\0'; s2++)
{
len2++;
}

ptr =  malloc (len + len2 +1);
if (ptr == NULL)
{
return (NULL);
}

for (index = 0; index < len;)
{
*(ptr + index) = *(s1 + index);
index++;
}

for (index = 0; index < len2;)
{
*(ptr + len + index) = *(s2 + index);
index++;
}
*ptr = '\0';


return (ptr);
}
