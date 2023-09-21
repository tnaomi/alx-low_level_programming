#include "lists.h"

/**
 * add_node - add a single node at the beginning
 * @head: singly-linked list h
 * @str: string to update structure
 * Return: number of nodes (elements)
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		printf("NULL");
	}
	else
	{
		new_node->str = strdup(str);
		new_node->next = (*head);
		(*head) = new_node;
	}

	return (new_node);
}
