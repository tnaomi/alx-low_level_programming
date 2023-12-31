#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - assign memory for an array
 * @nmemb: number of members
 * @size: size of array
 * Return: pointer / NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

char *array;
unsigned int indx;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

array = malloc(nmemb * size);

if (array == NULL)
{
return (NULL);
}

/*in calloc,a poiinter has to be initialised with 0*/

for (indx = 0; indx < (nmemb * size);)
{
array[indx] = 0;/*Each element init 0*/
indx++;
}
return (array);
free(array);
}
