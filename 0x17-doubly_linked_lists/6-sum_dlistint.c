#include "lists.h"

/**
 * sum_dlistint - calculates and returns the sum of all the data
 *                values (n) stored in a doubly-linked list of integers
 *
 *
 * @head: double pointer to the head of the linked list
 *
 * Return: If the provided list is empty  the
 *         function returns 0. Otherwise it returns the sum of all the data
 *
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}