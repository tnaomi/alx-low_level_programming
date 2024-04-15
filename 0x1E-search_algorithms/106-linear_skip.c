#include "search_algos.h"

/**
 * linear_skip - search using the Skip List search algorithm
 * @list: pointer to the first element of the linked list to search in
 * @value: value to be searched for
 * Return: Index, -1 if value not present / array is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *lane;

	if (list == NULL || !(value))
		return (NULL);

	lane = list;

	while (lane->express && lane->n < value)
	{
		list = lane;
		lane = lane->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)lane->index, lane->n);
	}

	if (lane->express == NULL)
	{
		list = lane;
		while (lane->next)
			lane = lane->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)lane->index);

	while (list != lane->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
