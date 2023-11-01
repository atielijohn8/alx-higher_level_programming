#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * insert_node - inserts given number to linked list
 *               pointer to head of linked list int number
 *
 * @head: pointer to head of linked list
 * @number: int value
 *
 * Return: if memory allocation fails  return
 *         NULL
 *         suscces - a pointer to new_node current_node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current_node = *head, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = number;

	if (current_node == NULL || current_node->n >= number)
	{
		new_node->next = current_node;
		*head = new_node;
		return (new_node);
	}

	do
    {
        if (current_node->next == NULL || current_node->next->n >= number)
        {
            new_node->next = current_node->next;
            current_node->next = new_node;
            return (new_node);
        }
        current_node = current_node->next;
    } while (1);

    return (new_node);
}