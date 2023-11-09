#include "lists.h"

/**
 * free_dlistint - frees allocated memory for doubly-linked
 * @head: pointer to the head of the list.
 *Description: free_dlistint function and is  responsible for deallocating the
 *             memory used by each node in the provided doubly-linked list
 *
 *
 */

void free_dlistint(dlistint_t *head)
{

	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
