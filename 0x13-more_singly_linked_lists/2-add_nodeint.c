#include "lists.h"

/**
 * add_nodeint - Add new node at head
 * @head: reference to head
 * @n: new data for the list
 * Return: Address of new node/ NULL if error
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);

}
