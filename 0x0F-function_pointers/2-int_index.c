#include "function_pointers.h"

/**
 * int_index - fxn that searches an array
 * for an integer and returns the first index
 * @array: an array of integers
 * @size: size of the array
 * @cmp: pointer to a function that compares
 * the array elements.
 * Return: -1 if size < 0 & no matches, index of 1st match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int indx;

	if (size <= 0)
		return (-1);

	for (indx = 0; indx < size; indx++)
	{
		cmp(array[indx]);
		if (cmp(array[indx]) != 0)
		{
			return (indx);
		}
	return (-1);
}
