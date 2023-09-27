#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at a given position
 * @head: memory pointing to list memory allocation
 * @index: Index of node to be deleted
 * Return: -1 if ERROR, 1 if SUCCESS
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *del;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		/*pop_listint(&(*head));*/
		*head = *head->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}

	else
	{
		for (; i < (index - 1); i++)
		{
			temp = temp->next;
		}
		del = temp->next;

		temp->next = temp->next->next;

		del->next = NULL;

		free(del);
	}

	return (1);
}
