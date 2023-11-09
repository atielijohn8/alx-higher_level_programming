#include "lists.h"

/**
 * dlistint_len - calculates number of elements
 *                in doubly linked list
 * @h: Pointer head of the linked list
 * Return: total number of elements
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t element_count = 0;

		while (h != NULL)
		{
			element_count++;
			h = h->next;
		}

    return (element_count);
}
