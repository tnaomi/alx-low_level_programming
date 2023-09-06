#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: array width (column count)
 * @height: array height (row count)
 *
 * Return: ptr to integer array
 */
int **alloc_grid(int width, int height)
{
int **array, index, index2;
int len = width * height;

if (len <= 0)
return (NULL);

array = (int **)malloc(sizeof(int *) * height);
if (array == NULL)
return (NULL);

for (index = 0; index < height; index++)
{
array[index] = (int *)malloc(sizeof(int) * width);
if (array[index] == NULL)
{
for (index--; index >= 0; index--)
free(array[index]);
free(array);
return (NULL);
}
}

for (index = 0; index < height; index++)
for (index2 = 0; index2 < width; index2++)
array[index][index2] = 0;

return (array);
}
