#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly-
 *                    linked list of int
 * @head: This is a pointer to a pointer to the head of the linked list
 *        passed as double pointer
 *        empty list
 * @n: int value to be stored
 * Return: address of new element
 *         if memory allocation fails it returns
 *         NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
