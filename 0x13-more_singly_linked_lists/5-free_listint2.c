#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: double pointer to a list
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
}
