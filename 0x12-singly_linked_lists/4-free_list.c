#include "lists.h"

/**
 * free_list - Append a new node
 * @head: linked list head
 * Return: Void
*/

void free_list(list_t *head)
{
	if (head)
	{
		for (; head != NULL;)
		{
			free(head->str);
			head = head->next;
		}
	}
}
