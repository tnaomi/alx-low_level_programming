#include "lists.h"

/**
 * reverse_listint - Reverse a list
 * @head: Reference to list head
 * Return: First node of reversed list/ NULL
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *store, *prev;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	prev = NULL;
	while (*head != NULL)
	{
		store = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = store;
	}
	*head = prev;
	return (*head);
	return (store);
}
