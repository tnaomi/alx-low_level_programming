#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: reference to listhead
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *next = malloc(sizeof(listint_t));

	while (head != NULL)
	{

		next = head->next;
		free(head);
		head = next;

	}
}