#include "search_algos.h"

/**
 * min - Compares two integers and returns the minimum
 * @a: First integer
 * @b: Second integer
 * Return: Minimum integer, -1 if error
*/

size_t min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

/**
 * jump_search - searches for a value using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to be searched for
 * Return: Index, -1 if value not presented / array is NULL.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = 0, index = 0, current = 0;

	if (!(value) || array == NULL || size == 0)
		return (-1);

	else
	{
		while (*(array + (min(step, size) - 1)) < value && index < size)
		{
			current = index;
			printf("Value checked array [%ld] = [%d]\n", index, *(array + index));
			index = step;
			step += (size_t)sqrt((double)size);

			if (current == 0)
				index += (size_t)sqrt((double)size);

		}

		printf("Value found between indexes [%ld] and [%ld]\n", current, index);

		for (; current <= index && current < size; current++)
		{
			printf("Value checked array[%ld] = [%d]\n", current, *(array + current));
			if (*(array + current) == value)
				return ((int)current);
		}

	}
	return (-1);

}
