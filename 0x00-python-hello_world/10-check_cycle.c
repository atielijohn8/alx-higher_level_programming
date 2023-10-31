#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * check_cycle - function to  check if the given
 *               linkened list contains a cylce
 *               performs cycle detection on linked list
 * 
 * @list: This is head of the sinly linked list as an input .
 *        pointer to head of singly linked list which
 *        dermine if list contains cyle
 *
 * Return: (-o)if no cycle found
 *         (-1) if cycle detected
 */
int check_cycle(listint_t *list)
{
	listint_t *snail=list;/*slow*/
	listint_t *ferari=list;/*fast*/

	
	
		if (list == NULL || list->next == NULL)
		return (0);

	snail = list->next;
	ferari = list->next->next;
	do
	{
		if (snail == ferari)
            return 1;

        snail = snail->next;
        ferari = ferari->next ? ferari->next->next : NULL;
	}
	
	
	while (snail && ferari); 

	return 1;
}
	