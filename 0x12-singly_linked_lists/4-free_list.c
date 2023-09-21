#include "lists.h"

/**
 * free_list - Append a new node
 * @head: linked list head
 * Return: Void
*/

void free_list(list_t *head)
{
	list_t *temp;

	if (head)
	{
		for (; head != NULL;)
		{
			temp = head->next;
			free(head->str);
			free(head);
			head = temp;
		}
	}
}
