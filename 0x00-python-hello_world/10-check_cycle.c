#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * check_cycle - this function checks if the given
 *               linkened list contains a cylce
 * 
 * @list: This is head of the sinly linked list.
 *        pointer to head of singly linked list
 *
 * Return: -o if no cycle found
 *         -1 if cycle detected
 */
int check_cycle(listint_t *list)
{
	listint_t *slow_y;
	listint_t *slow_n;

	if (list == NULL || list->next == NULL)
		return (0);

	slow_y = list->next;
	slow_n = list->next->next;

	while (slow_y && slow_n && slow_n->next)
	{
		if (slow_y == slow_n)
			return (1);

		slow_y = slow_y->next;
		slow_n = slow_n->next->next
	}

	return (0);
}    