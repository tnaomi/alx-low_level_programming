#include "lists.h"

/**
 * cr - create a new linked list from another list
 * @list: input list to append
 * @size: size of input array
 * @new: node to be appended
 * Return: Return Address for linked list/ ERROR
 */

const listint_t **cr(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **new_list;
	size_t indx;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}
	for (indx = 0; indx < size - 1; indx++)
		new_list[indx] = list[indx];
	new_list[indx] = new;
	free(list);
	return (new_list);
}

/**
 * print_listint_safe - print list in a  safe format
 * @head: pointer to list HEAD
 * Return: Number of nodes/ exit 98 if FAIL
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t indx, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (indx = 0; indx < num; indx++)
		{
			if (head == list[indx])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = create(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
