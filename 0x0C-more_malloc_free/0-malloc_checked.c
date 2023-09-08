#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * malloc_checked - returns pointer to allocated memory
 * @b: check var to be memory allocated
 * Return: Ptr / exit status of 98
 */

void *malloc_checked(unsigned int b)
{

int *ptr;

ptr = (int*) malloc(sizeof(b));

if (ptr == NULL)
{
exit (98);
}
else
{
return (ptr);
}

}
