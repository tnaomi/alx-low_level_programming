#include "lists.h"

/**
 * add_nodeint_end - appends node at the end of a listint_t list.
 * @head: reference to head
 * @n: new data to be appended
 * Return: Address of new node/ NULL if error
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_a = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (node_a == NULL)
		return (NULL);

	node_a->n = n;
	node_a->next = NULL;

	if (*head == NULL)
		*head = node_a;
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = node_a;

	}

	return (node_a);

}
