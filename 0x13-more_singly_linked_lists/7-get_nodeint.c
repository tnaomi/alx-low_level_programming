#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 * @head: reference to head
 * @index: new data for the list
 * Return: address for new node/ NULL if error
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = 0;
	listint_t *store;

	if (head == NULL)
		return (NULL);

	for (; head != NULL; len++)
	{
		if (len == index)
			store = head;
			if (store == NULL)
				return (NULL);
		head = head->next;
	}

	return (store);
}
