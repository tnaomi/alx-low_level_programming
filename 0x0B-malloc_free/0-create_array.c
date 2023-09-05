#include "main.h"

/**
 * create_array - create an array of chars,
 * initiate with a specific char
 * @size: array size
 * @c: character to initialise array
 * Return: NULL / Ptr
 */

char *create_array(unsigned int size, char c)
{

char *ptr;
unsigned int indx = 0;

ptr =  malloc(size * sizeof(char));

if (ptr == NULL || size == 0)
{
return (NULL);
}
else
{
for (;
indx < size;
indx++)
{
*(ptr + indx) = c;
}
}
return (ptr);
}
