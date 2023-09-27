#include "lists.h"

/**
 * sum_listint - Returns the nth node of a listint_t linked list.
 * @head: reference to list head
 * Return: Sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);


	for (; head != NULL;)
	{
		sum += head->n;
		head = head->next;
	}


	return (sum);
}
