#include "lists.h"

/**
 * listint_len - Print number of elements in a list
 * @h: pointer to linked list
 * Return: number of nodes/ 1 if error
*/

size_t listint_len(const listint_t *h)
{
	unsigned int num = 0;

	for (; h != NULL; num++)
		h = h->next;

	return (num);
}
