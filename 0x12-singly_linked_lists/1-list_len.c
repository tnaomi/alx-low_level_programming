#include "lists.h"

/**
 * list_len - print all the elements of a list
 * @h: singly-linked list h
 * Return: number of nodes (elements)
*/

size_t list_len(const list_t *h)
{
	unsigned int num;

	for (num = 0; h != NULL && h->str; )
	{
		h = h->next;
		num++;

	}

	return (num);
}
