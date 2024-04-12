#include "search_algos.h"

/**
 * linear_search - searches for a value using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to be searched for
 * Return: Index, -1 if value not presented / array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!(value) || array == NULL)
		return (-1);

	else
	{
		for (; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, *array);

			if (*array == value)
				return (i);
			array++;
		}
		return (-1);
	}

}
