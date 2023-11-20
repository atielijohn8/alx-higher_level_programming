#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning doublyl linked list
 *
 * @head: Pointer to a pointer to the head of the linked list
 *        new node is added at the begging
 * @n: int value stored at the node
 * Return: address of new element
 *         if memory allocation fails
 *         returns NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}