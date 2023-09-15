#include "function_pointers.h"

/**
 * array_iterator - call a fxn per array elements
 * @array: an array of integers
 * @size: size of the array
 * @action: pointer to a function
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t indx;

	if (array && action)
	{
		for (indx = 0; indx < size; indx++)
		{
			action(array[indx]);
		}
	}
}
