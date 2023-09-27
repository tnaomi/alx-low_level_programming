#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 *  and returns the head node’s data (n).
 * @head: reference to head
 * Return: 1 if success, 0 if error
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (temp == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (1);
}
