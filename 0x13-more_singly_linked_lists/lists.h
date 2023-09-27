#ifndef LISTS_H
#define LISTS_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _putchar(char c);
/*Prints all elements of a linked list*/
size_t print_listint(const listint_t *h);
/*Returns number of nodes AKA length*/
size_t listint_len(const listint_t *h);
/*Adds Node at the beginning of a linked list*/
listint_t *add_nodeint(listint_t **head, const int n);
/*Adds a new node at the end of a listint_t list*/
listint_t *add_nodeint_end(listint_t **head, const int n);
/*Frees a listint_t list.*/
void free_listint(listint_t *head);
/*Frees a listint_t list (2nd). Sets head to NULL*/
void free_listint2(listint_t **head);
/*Deletes the head node of a listint_t linked list*/
int pop_listint(listint_t **head);
/*Returns the nth node of a listint_t linked list.*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/*Sums all the data (n) of a listint_t linked list.*/
int sum_listint(listint_t *head);
/*Insert a new node at a given position*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/*Delete a node of a linked list at a given position*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);

#endif /* LISTS.H*/
