#include "lists.h"

listint_t *new_reverse_listint(listint_t **head);
int is_palindrome(listint_t **head);

/**
 * new_reverse_listint - Reverses a singly-linked list
 *                       of type listint_t.
 * @head: A pointer to the starting node of the list
 *        which is to be  reversed.
 *
 * Return: A pointer to the head of reversed list.
 */
listint_t *new_reverse_listint(listint_t **head)
{
	listint_t *node = *head, *next, *new_prev = NULL;

	do
	{
		next = node->next;
		node->next = new_prev;
		new_prev = node;
		node = next;
	} while (node);

	*head = new_prev;
	return (*head);
}

/**
 * is_palindrome - checks wheather a given singly 
 *                 list is palindrome
 * @head: pointer head of linked list checked
 *
 * Return: If the linked list is not a palindrome
 *         function returns  (0)
 *         If the linked list is a palindrome
 *         function returns  (1)
 */
int is_palindrome(listint_t **head)
{
	listint_t *tmp, *rev, *mid;
	size_t size = 0, i;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	tmp = *head;
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}

	tmp = *head;
	for (i = 0; i < (size / 2) - 1; i++)
		tmp = tmp->next;

	if ((size % 2) == 0 && tmp->n != tmp->next->n)
		return (0);

	tmp = tmp->next->next;
	rev = new_reverse_listint(&tmp);
	mid = rev;

	tmp = *head;
	while (rev)
	{
		if (tmp->n != rev->n)
			return (0);
		tmp = tmp->next;
		rev = rev->next;
	}
	new_reverse_listint(&mid);

	return (1);
}