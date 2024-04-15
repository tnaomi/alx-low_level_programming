#include "search_algos.h"

/**
 * jump_list - search using the Jump List search algorithm
 * @list: pointer to the first element of the linked list to search in
 * @size: Number of nodes in the list
 * @value: value to be searched for
 * Return: Index, -1 if value not present / array is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, count, step;
	listint_t *prev;

	if (list == NULL || size == 0 || !(value))
		return (NULL);

	step = (size_t)sqrt((double)size);
	index = 0;
	count = 0;

	do {
		prev = list;
		count++;
		index = count * step;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
