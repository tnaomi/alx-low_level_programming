#include "search_algos.h"

/**
 * binary_search - searches for a value using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to be searched for
 * Return: Index, -1 if value not presented / array is NULL.
 */

int binary_search(int *array, size_t size, int value)
{

	if (!(value) || array == NULL)
		return (-1);

	else
	{
		size_t mid = 0;
		size_t i = 0, left = 0;

		while (left <= size)
		{
			printf("Searching in array: ");

			for (; i < size; i++)
				printf("%d%s", *(array + i), (i != size - 1) ? ", " : "\n");

			mid = left + (size - 1) / 2;

			if (*(array + mid) == value)
				return (mid);
			if (*(array + mid) < value)
				left = mid + 1;
			else
				size = mid - 1;
		}
		return (-1);
	}
}
