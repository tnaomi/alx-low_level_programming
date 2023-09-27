#include "lists.h"

/**
 * print_listint - Print all the elements of a list
 * @h: reference to list
 * Return: number of nodes / 1 if error
*/

size_t print_listint(const listint_t *h)
{
	unsigned int num = 0;

	for (; h != NULL; num++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
