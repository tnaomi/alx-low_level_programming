#include "lists.h"

/**
 * print_list - print all the elements of a list
 * @h: singly-linked list h
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int indx = 0;

	for (; h != NULL; indx++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", strlen(h->str), h->str);

		h = h->next;
	}
	return (indx);
}
