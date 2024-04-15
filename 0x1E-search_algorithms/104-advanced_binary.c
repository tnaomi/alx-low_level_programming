#include "search_algos.h"

/**
 * recursive - recursive binary search a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: value to be searched for
 * Return: Index, -1 if value not presented / array is NULL.
 */

int recursive(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t index;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (index = 0; index < size; index++)
		printf("%s %d", (index == 0) ? ":" : ",", *(array + index));

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == *(array + mid))
	{
		if (mid > 0)
			return (recursive(array, mid + 1, value));
		return ((int)mid);
	}

	if (value < *(array + mid))
		return (recursive(array, mid + 1, value));

	mid++;
	return (recursive(array + mid, size - mid, value) + mid);
}

/**
 * advanced_binary - binary search using Recursive()
 * @array: pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: value to be searched for
 * Return: Index, -1 if value not presented / array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = recursive(array, size, value);

	if (index >= 0 && *(array + index) != value)
		return (-1);

	return (index);
}
