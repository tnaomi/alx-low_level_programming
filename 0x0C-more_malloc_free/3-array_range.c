#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - assign memory for an array
 * @min: number of members
 * @max: size of array
 * Return: pointer / NULL
 */

int *array_range(int min, int max)
{

int *array;
unsigned int indx, memb;

if (min > max)
{
return (NULL);
}

memb = (max - min) + 1;
array = malloc(sizeof(int) * memb);

if (array == NULL)
{
return (NULL);
}

for (indx = 0; min <= max;)
{
array[indx] = min++;
indx++;
}
array[memb] = '\0';
return (array);
free(array);
}
