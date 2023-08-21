#include "main.h"
/**
*  swap_int - swaps vals of a and b
*  @a: pointer a
*  @b: pointer b
*  Return: 0 is success
*/

void swap_int(int *a, int *b)

{

int store;

store = *a;

*a = *b;

*b = store;

}
