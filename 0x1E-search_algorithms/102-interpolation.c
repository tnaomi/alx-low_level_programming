#include "search_algos.h"

/**
 * interpolation_search - search using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to be searched for
 * Return: Index, -1 if value not presented / array is NULL.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t current, min, max;
	double f;

	if (array == NULL || !(value) || size == 0)
		return (-1);

	min = 0;
	max = size - 1;

	while (size)
	{
		f = (double)(max - min) /
		(*(array + max) - *(array + min)) * (value - *(array + min));
		current = (size_t)(min + f);
		printf("Value checked array[%d]", (int)current);

		if (current >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", *(array + current));
		}

		if (*(array + current) == value)
			return ((int)current);

		if (*(array + current) < value)
			min = current + 1;
		else
			max = current - 1;

		if (min == max)
			break;
	}

	return (-1);
}
