#include "lists.h"

/**
 * get_dnodeint_at_index - it returns node at
 *                         specified index of dlistint
 * @head: double pointer to the head of the linked list
 *        passed as double pointre to func
 * @index: index of the node to be retrived
 *
 * Return: returns null
 *         otherwise returns pointer to specified node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
