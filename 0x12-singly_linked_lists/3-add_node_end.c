#include "lists.h"

/**
 * add_node_end - Append a new node
 * @head: linked list head
 * @str: Input string
 * Return: Number of nodes
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (end_node == NULL)
		return (NULL);
	end_node->str = strdup(str);

	if (end_node->str == NULL)
	{
		free(end_node);
		return (NULL);
	}
	end_node->len = strlen(str);
	end_node->next = NULL;

	if (*head == NULL)
		*head = end_node;
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = end_node;
	}
	return (end_node);
}
