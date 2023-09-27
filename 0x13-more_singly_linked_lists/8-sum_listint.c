#include "lists.h"

/**
 * sum_listint - Returns the nth node of a listint_t linked list.
 * @head: reference to list head
 * Return: Sum
*/

int sum_listint(listint_t *head)
{
	unsigned int sum = 0, indx = 0;
	listint_t *store;

	if (head == NULL)
		return (0);


	for (; head != NULL;)
	{
		store = get_nodeint_at_index(head, indx);
		sum += store->n;
		head = head->next;
	}


	return (sum);
}
